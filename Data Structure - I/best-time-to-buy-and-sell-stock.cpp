// Returns the max profit gained from buying and selling stock in a number of days
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_spent=prices[0];
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            min_spent=min(min_spent,prices[i]);
            max_profit=max(max_profit,prices[i]-min_spent);
        }
        return max_profit;
    }
};