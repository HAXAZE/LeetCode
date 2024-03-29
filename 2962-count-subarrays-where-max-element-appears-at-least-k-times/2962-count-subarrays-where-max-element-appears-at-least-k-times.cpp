class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int cnt = 0;
        long long  ans = 0;
        for(int l = 0,r=0;r<n;r++){
            cnt+=(nums[r]==maxi);
            while(cnt>=k){
                cnt-=(nums[l++]==maxi);
            }
            ans+=l;
        }
        return ans;
    }
};