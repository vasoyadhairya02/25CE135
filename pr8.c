#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to open a savings account. Welcome to Spark Savings Bank!\n");
    } else {
        printf("Sorry, you are not eligible to open a savings account.\n");
        printf("Please visit us when you turn 18.\n");
    }

    return 0;
}
