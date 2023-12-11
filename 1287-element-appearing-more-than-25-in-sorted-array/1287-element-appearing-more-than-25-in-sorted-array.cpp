class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
     map<int,int>m;
     int goal = arr.size()/4;
     for(int num:arr){
         m[num]++;
         if(m[num]>goal){
             return num;
         }
     }
     return -1;
    }
};