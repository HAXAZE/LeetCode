class Solution {
public:
    vector<int>next(vector<int>&nums)
    {
        next_permutation(nums.begin(),nums.end());
        return nums;
    }
    void nextPermutation(vector<int>& nums) {
       next(nums);
    }
};