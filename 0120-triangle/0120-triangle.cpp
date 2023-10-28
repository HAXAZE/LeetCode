class Solution {
public:
    int memo(int i,int j,int n,vector<vector<int>>&t,vector<vector<int>>&dp){
        if(i == n-1) return t[i][j];

        if(dp[i][j]!=-1) return dp[i][j];

        int down = t[i][j] + memo(i+1,j,n,t,dp);
        int diag  = t[i][j] + memo(i+1,j+1,n,t,dp);

        return dp[i][j] = min(down,diag);
    }
    int minimumTotal(vector<vector<int>>& a) {
      int n = a.size();
      vector<vector<int>>dp(n,vector<int>(n,-1));
      return memo(0,0,n,a,dp);
    }
};