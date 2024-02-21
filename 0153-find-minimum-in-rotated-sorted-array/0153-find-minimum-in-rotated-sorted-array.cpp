class Solution {
public:
    int binsearch(vector<int>&arr,int n){
        int low = 0;
        int high = n-1;
        int ans = INT_MAX;
        int mid = low+(high-low)/2;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[low]<=arr[mid]){
                ans = min(ans,arr[low]);
                low = mid+1;
            }
            else{
                ans = min(ans,arr[mid]);
                high = mid-1;
            }
        }
        return ans;
    }
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        return binsearch(nums,n);
    }
};