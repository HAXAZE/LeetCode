class Solution {
public:
    int memo(vector<int>&cost,vector<int>&time,int index,int walls,vector<vector<int>>&dp){
        // base case
        if(walls<=0) return 0;
        if(index<0) return 1e9;

        // check in table
        if(dp[index][walls]!=-1) return dp[index][walls];

        int nottake = 0+memo(cost,time,index-1,walls,dp);
        int take = cost[index] + memo(cost,time,index-1,walls-time[index]-1,dp);
        return dp[index][walls] = min(nottake,take);
    }
    int paintWalls(vector<int>&cost,vector<int>&time){
        int n = cost.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return memo(cost,time,n-1,n,dp);
    }

};