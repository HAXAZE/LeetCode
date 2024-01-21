class Solution {
public:
    int memo(vector<int>&nums,int n,vector<int>&dp){
        if(n<0)
            return 0;
        
        if(n==0)
            return nums[0];
        
        
        if(dp[n]!=-1){
            return dp[n];    
        }
            int include = memo(nums,n-2,dp)+nums[n];
            int exclude = memo(nums,n-1,dp)+0;
            int res = max(include,exclude);
            return dp[n]=res;
        }
        int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return memo(nums,n-1,dp);
        }
};

