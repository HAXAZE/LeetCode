class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        // Without Extra Space
        // int left = 0;
        // int right = nums.size()-1;

        // while(left<right){
        //     if(nums[left]%2==0){
        //         left++;
        //     }
        //     else if(nums[right]%2!=0){
        //         right--;
        //     }
        //     else{
        //         swap(nums[left],nums[right]);
        //     }
        // }
        // return nums;
        
        //  With Extra Space
        vector<int>evenNumbers;
        vector<int>oddNumbers;
        // separating even and odd numbers
        for(int i =0;i<nums.size();i++){
            if(nums[i]%2==0)
                evenNumbers.push_back(nums[i]);
            else
                oddNumbers.push_back(nums[i]);
        }
        for(auto x:oddNumbers){
            evenNumbers.push_back(x);
        }
        return evenNumbers;
    }
};