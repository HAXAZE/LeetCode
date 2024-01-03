class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
            int prev = 0,ans =0;
            for(string x:bank){
                int cnt =0;
                for(char c:x){
                    if(c =='1'){
                    cnt++;
                }
            }
            if(cnt!=0){
                ans +=(prev*cnt);
                prev = cnt;
            }
    }
    return ans;
    }
};