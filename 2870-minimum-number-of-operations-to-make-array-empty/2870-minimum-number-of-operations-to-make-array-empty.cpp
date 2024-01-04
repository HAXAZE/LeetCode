class Solution {
public:
    int calculateOperations(vector<int>& nums) {
        int totalOperations = 0;
        map<int, int> countMap;
        int numsSize = nums.size();
        
        for (int i = 0; i < numsSize; ++i) {
            countMap[nums[i]]++;
        }

        for (map<int, int>::iterator it = countMap.begin(); it != countMap.end(); ++it) {
            int count = it->second; 
            if (count < 2) {
                return -1;
            } else {
                int operationsToAdd = (count + 2) / 3;
                totalOperations += operationsToAdd;
            }
        }
        return totalOperations;
    }

    int minOperations(vector<int>& nums) {
        return calculateOperations(nums);
    }
};
