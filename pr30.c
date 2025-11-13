#include <stdio.h>

void sortPrices(float *prices, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(prices + j) > *(prices + j + 1)) {
                float temp = *(prices + j);
                *(prices + j) = *(prices + j + 1);
                *(prices + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of items in the inventory: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Number of items must be greater than 0.\n");
        return 1;
    }

    float prices[n];

    printf("\nEnter the prices of the items:\n");
    for (int i = 0; i < n; i++) {
        printf("Price of item %d: ", i + 1);
        scanf("%f", prices + i);

        if (*(prices + i) < 0) {
            printf("Error: Price cannot be negative. Please restart and enter valid prices.\n");
            return 1;
        }
    }

    sortPrices(prices, n);

    printf("\nSorted prices in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f  ", *(prices + i));
    }

    printf("\n");
    return 0;
}
