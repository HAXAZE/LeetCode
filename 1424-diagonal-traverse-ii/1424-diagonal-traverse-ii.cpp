class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       unordered_map<int,vector<int>> groups;
       for(int row = nums.size()-1;row>=0;row--){
           for(int col  = 0;col<nums[row].size();col++){
               int diagonal = row + col;
            //    we are pushing every ele in that row by increasing col till end of row size
                groups[diagonal].push_back(nums[row][col]);       
        }
       }
       vector<int>res;
       int cnt = 0;
        // we are using while loop because we have to push in ans till the cnt is out of range 
       while(groups.find(cnt)!=groups.end()){
           for(int num:groups[cnt]){
               res.push_back(num);
           }
           cnt++;
       }
       return res;
    }
};