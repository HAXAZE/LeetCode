class Solution {
public:
    // memoization
    int choices(string s, int index,vector<int> &dp)
    {
        if(index == s.size())
            return 1;
            // this is the method of memoization to check if it is not -1
        if(dp[index]!=-1)
            return dp[index];
        
        int res = 0;
        if(s[index]!='0')
            res +=choices(s,index+1,dp);
        // solving for single character
        if(index+1<s.size() && (s[index]=='1' || s[index]=='2' &&s[index+1]<='6'))
        // for double character
        res +=choices(s,index+2,dp);
        return dp[index] = res;
    }
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        return choices(s,0,dp);
    }
};