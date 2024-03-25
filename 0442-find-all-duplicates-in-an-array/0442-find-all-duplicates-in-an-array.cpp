class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.second>=2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};