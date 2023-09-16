class Solution {
public:
    int dp[101][10001];
    int rec(int e,int f){
        if(e == 1) return f;
        if(f == 0 || f==1) return f;
        if(dp[e][f]!=-1) return dp[e][f];
        int mn  = INT_MAX;
        int l = 1, h = f;
        while(l<=h)
        {
            int mid = l +(h-l)/2;
            int a = rec(e-1,mid-1);
            int b = rec(e,f-mid);
            int x = max(a,b) + 1;
            mn = min(mn,x);
            if(a>b) h = mid-1;
            else l = mid+1;
        }
        return dp[e][f]  = mn;
    }
    int superEggDrop(int e, int f) {
        memset(dp,-1,sizeof(dp));
        return rec(e,f);
    }
};