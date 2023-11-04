class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum  = 0;
        for(int i = 0;i<n;i++){
            sum +=nums[i];
        }
        int sum2 = 0;
        for(int j = 1;j<=n;j++){
            sum2 +=j;
        }

        return sum2 - sum;
    }
};