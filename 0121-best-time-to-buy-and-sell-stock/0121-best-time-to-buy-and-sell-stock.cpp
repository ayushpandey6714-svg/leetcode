class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxPrice = 0;
        int n = prices.size();

        for(int i =0 ; i < n; i++){
            maxPrice=max(maxPrice , prices[i] - minPrice);
            minPrice=min(prices[i], minPrice);
        }
        return maxPrice;
        
    }
};