class Solution {
public:
    struct item{
        int val;
    };

    struct sparseTable{
        int sze, mxLog;
        vector<int> logval;
        vector<vector<item>> table;

        item merge(item a, item b){
            return {min(a.val, b.val)};
        }

        item single(int v){
            return {v};
        }

        void build(vector<int> &a){
            sze=a.size();
            mxLog=log2(sze);
            table.resize(sze+1);
            logval.resize(sze+1);
            logval[1]=0;
            for(int i=2; i<=sze; i++)logval[i]=logval[i/2]+1;
            for(int i=0; i<sze; i++){
                table[i].resize(mxLog+1);
                fill(table[i].begin(), table[i].end(), item());
            }
            for(int i=0; i<sze; i++)table[i][0]=single(a[i]);
            for(int i=1; i<=mxLog; i++){
                for(int j=0; (j+(1<<i))<=sze; j++){
                    table[j][i]=merge(table[j][i-1], table[j+(1<<(i-1))][i-1]);
                }
            }
        }

        item query(int l, int r){
            int j=logval[r-l+1];
            item ans=item();
            ans=merge(table[l][j], table[r-(1<<j)+1][j]);
            return ans;
        }
    };

    int maximumScore(vector<int>& nums,int k) {
        sparseTable st;
        st.build(nums);
        int n=nums.size();
        int left = 0, right = n-1, score = 0;
        while (left <= k && k<= right){
            int currentScore = st.query(left,right).val * (right - left + 1);
            score = max(score, currentScore);
            if (st.query(left,k).val <= st.query(k,right).val){
                left+=1;
            }else{
                right-=1;
            }
        }
        return score ;
    }
};