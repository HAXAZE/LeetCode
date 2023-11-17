class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin(),nums.end());
        vector<pair<int,int>> v;
        int start = 0;
        int end = n-1;
        while(start<end){
        v.push_back(make_pair(nums[start],nums[end]));
        start++;
        end--;
        }
        
        for(auto pair:v){
            int maxi = pair.first + pair.second;
            if(maxi>sum){
                sum = maxi;
            }
        }
        return sum;
    }
};