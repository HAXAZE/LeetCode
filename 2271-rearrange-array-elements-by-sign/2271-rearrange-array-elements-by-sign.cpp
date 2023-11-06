class Solution {
public:
 vector<int> rearrangeArr(vector<int>& nums) {
        int n  = nums.size();
        vector<int>ans(n,0);
        int posindex = 0;
        int negindex = 1;
        for(int i = 0;i<n;i++)
        {
            if(nums[i]<0){
                ans[negindex] = nums[i];
                negindex+=2;
            }
            else{
                ans[posindex] = nums[i];
                posindex +=2;
            }
        }
        return ans;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
         ans = rearrangeArr(nums);
         return ans;
    }
};