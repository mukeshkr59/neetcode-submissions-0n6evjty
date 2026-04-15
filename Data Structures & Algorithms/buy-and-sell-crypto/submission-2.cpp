class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int b = INT_MAX;
        int sell = 0;
        int profit = 0;
        for( int i = 0;i<n;i++){
            b = min(b, prices[i]);
            profit = max( profit, prices[i]-b);          
        }
        return profit;
    }
};
