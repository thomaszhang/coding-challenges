// O(N^2) brute force solution

int maxProfit(int* prices, int pricesSize){
    // Base case: no transaction
    int max_profit = 0;
    // Calculate all price deltas
    for (int i = 0; i < pricesSize; i++) {
        // For all deltas relative to prices[i]
        for (int j = i; j < pricesSize; j++) {
            if (prices[j]-prices[i] > max_profit)
                max_profit = prices[j]-prices[i];
        }
    }
    return max_profit;
}
