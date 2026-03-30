class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int b=0, s=1;
        int profit=0;
        while(s<n){
            // profit = max(profit, prices[s]-prices[b]);
            if(prices[s]>=prices[b]){
                profit = max(profit, prices[s]-prices[b]);
            }else{
                b=s;
            }
            s++;
        }
        return profit;
    }
};
