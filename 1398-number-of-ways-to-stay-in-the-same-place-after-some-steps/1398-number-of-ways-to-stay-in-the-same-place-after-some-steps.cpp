class Solution {
public:
    int mod = 1e9+7;
    int fun(vector<vector<int>>&dp,int ind,int cur,int steps,int len){
        // Base Case
        if(ind<0 || ind>=len) return 0;
        if(cur>=steps && ind!=0) return 0;
        if(cur == steps && ind == 0 ) return 1;
        // Checking in table 
        if(dp[ind][cur]!=-1) return dp[ind][cur];
        // declaring ans variable as 0 
        long long ans = 0;

        // using recursion for calculation of each valid position 
        
        ans = (ans + fun(dp,ind,cur+1,steps,len))%mod;
        ans = (ans + fun(dp,ind+1,cur+1,steps,len))%mod;
        ans = (ans + fun(dp,ind-1,cur+1,steps,len))%mod;
        return dp[ind][cur] = ans;

    }
    int numWays(int steps, int arrlen) {
        vector<vector<int>>dp(min(arrlen,steps*2),vector<int>(steps,-1));
        return fun(dp,0,0,steps,min(arrlen,steps*2));
    }
};