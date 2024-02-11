class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n = nums.size();
     int sum = (n*(n+1))/2;
     int tempsum = 0;
     for(int i = 0;i<n;i++){
         tempsum +=nums[i];
     }
     return sum - tempsum;
}

};