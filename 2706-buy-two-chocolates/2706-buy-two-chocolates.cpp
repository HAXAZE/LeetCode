class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(int i = 0;i<n;i++){
            if(prices[i]<min1){
                min2 = min1;    
                min1 = prices[i];
            }    
            else if(prices[i]<min2){
                min2 = prices[i];
            }
        }
            
            int ans = min1+min2;
            
            if(ans==money){
                return 0;
            }
            else if(ans>money){
                return money;
            }
            else if(ans<money){
                return money-ans;
            }
            return 0;
        }
};