class Solution {
public:
    int memo(vector<int>&cost,int idx,vector<int>&m){
         if(idx == cost.size()-1 || idx == cost.size()-2){
             return cost[idx];
         }
         if(m[idx]!=0){
             return m[idx];
         }
         int x = memo(cost,idx+1,m);
         int y = memo(cost,idx+2,m);
         m[idx] = min(x,y)+cost[idx];
         return m[idx];
    }

    int minCostClimbingStairs(vector<int>& cost) {
            if(cost.size() == 2){
                return min(cost[0],cost[1]);
            }
            vector<int>m(1001);
            int x = memo(cost,0,m);
            int y = memo(cost,1,m);
            return min(x,y);
    }
};