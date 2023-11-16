class Solution {
public:
    set<string>st;
    string ans="";
    void dfs(string s,int n){

        if(s.size()==n)
        {
            if(st.find(s)==st.end() && ans ==""){
                ans = s;
            }
            return;
        }

        dfs(s+"0",n);
        dfs(s+"1",n);
        return ;    
    }
    

    string findDifferentBinaryString(vector<string>& nums) {
       for(auto ele:nums){
           st.insert(ele);
       }

       int n = nums[0].size();

       dfs("",n);

       return ans;
    }
};