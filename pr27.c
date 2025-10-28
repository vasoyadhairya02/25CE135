#include <stdio.h>

int main() {
    int n, i;
    long long first = 1, second = 1, next;

    printf("Enter the number of months: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Please enter a valid number of months.\n");
        return 1;
    }

    printf("\nSavings growth over %d months:\n", n);


    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            next = 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Month %d: ₹%d\n", i, next);
    }

    return 0;
}
