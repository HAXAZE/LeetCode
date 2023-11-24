class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        deque<int>dq;
        for(int num:piles){
            dq.push_back(num);
        }

        int ans = 0;
        while(!dq.empty()){
        dq.pop_back(); //alice
        ans +=dq.back(); // us
        dq.pop_back();
        dq.pop_front(); // bob 
    }
    return ans;
    }
};