
#include <stdio.h>

int main() {

    int prices[] = {100, 180, 260,310, 40, 535,695};
    int n = sizeof(prices) / sizeof(prices[0]);
    int minPrice = prices[0];
    int maxProfit = 0;

    printf("Starting minPrice: %d\n", minPrice);
    for (int i = 1; i < n; i++) {
        int profit = prices[i] - minPrice;

        printf("Day %d: Price = %d, minPrice = %d, Profit = %d\n", i + 1, prices[i], minPrice, profit);

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}
