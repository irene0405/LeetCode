class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int min = 10001;
        int ans = 0;
        std::cout << prices.size();
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if ((prices[i] - min) > ans) {
                ans = prices[i] - min;
            }
        }
        return ans;
    }
};

// Runtime: 342 ms, faster than 26.55% of C++ online submissions for Best Time to Buy and Sell Stock.
// Memory Usage: 93.4 MB, less than 51.20% of C++ online submissions for Best Time to Buy and Sell Stock.

