class Solution {
public:
    int solve(vector<int>&nums){
        int n = nums.size();
        int a,b,c;

        a=0;
        b=nums[0];

        for(int i = 1;i<n;i++){
            int incl = a + nums[i];
            int excl = b + 0;
            c = max(incl,excl);
            a = b;
            b = c;
        }
        return b;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>first,last;
        for(int i = 0;i<n;i++){
            if(i!=n-1){
                first.push_back(nums[i]);
            }
            if(i!=0){
                last.push_back(nums[i]);
            }
        }
        return max(solve(first),solve(last));
    }
};