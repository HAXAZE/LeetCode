class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        // Time complexity :O(m * n * log(m)).
        // vector<pair<int,int>> rowstr;
        // for(int i=0;i<mat.size();i++){
        //     int str = accumulate(mat[i].begin(),mat[i].end(),0);
        //     rowstr.push_back({str,i});
        // }
        // sort(rowstr.begin(),rowstr.end());
        // vector<int> res;
        // for(int i=0;i<k;i++){
        //     res.push_back(rowstr[i].second);
        // }
        // return res;

        // Applying Binary Search
        // Time Complexity : O(nlogn)
        vector<pair<int,int>>v;
        for(int i=0;i<mat.size();i++){
            int low = 0;
            int high = mat[0].size()-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(mat[i][mid]==1) low = mid + 1;
                else high = mid-1;
            }
            v.push_back({low,i});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(v[i].second);
        return ans;
    }
};