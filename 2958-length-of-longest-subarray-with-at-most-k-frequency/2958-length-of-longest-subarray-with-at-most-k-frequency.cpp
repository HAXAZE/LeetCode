class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>m;
        int cnt = 0;
        for(int l = 0,r=0;r<n;r++){
            m[nums[r]]++;
            if(m[nums[r]]>k){
                while(nums[l]!=nums[r]){
                    m[nums[l]]--;
                    l++;
                }
                m[nums[l]]--;
                l++;
            }
            cnt= max(cnt,r-l+1);
        }
        return cnt;
    }
    };