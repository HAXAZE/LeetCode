class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // IF THE STARTING AND DESTINATION CELLS ARE THE SAME,CHECK IF THE TIME LIMIT ALLOWS FOR IT 
        if(sx == fx && sy == fy)
        {
            return (t>1 || t == 0);
        }

        int heightDiff = abs(sy-fy);
        int widthdiff =  abs(sx-fx);

        int extraTime = abs(heightDiff - widthdiff);

        return (min(heightDiff,widthdiff) + extraTime)<=t;
    }
};