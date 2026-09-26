class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int totalProfit = 0;
        for(int i=0; i<n; i++){
            int cost = prices[i] - mini;
            totalProfit = max(totalProfit,cost);
            if(prices[i]<mini) mini = prices[i];
        }
        return totalProfit;
    }
};