

int maxProfit(int *prices, int pricesSize) {
    int profit = 0;
    int min = 10001;
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
        } else {
            if (prices[i] - min > profit) {
                profit = prices[i] - min;
            }
        }
    }
    if (profit > 0) {
        return profit;
    } else {
        return 0;
    }
}

// Runtime: 141 ms, faster than 97.13% of C online submissions for Best Time to Buy and Sell Stock.
// Memory Usage: 12.8 MB, less than 99.04% of C online submissions for Best Time to Buy and Sell Stock.
