class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int m = nums1.size();
        int n = nums2.size();
        vector<int> nums3(m+n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
        int p=nums3.size();
        double x=0;
        if(p%2==1){
            x= nums3[p/2];
        }
        else{
            x=(nums3[p/2-1]+nums3[p/2])/2.0;
        }
        return x;
    }
};