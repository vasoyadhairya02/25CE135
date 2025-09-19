#include <stdio.h>

int main() {
    int age;
    int tf = 250;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("Free entry! Enjoy the park!\n");
    } else {
        printf("Ticket will be required for entry so Please pay Rs %d.\n", tf);

    }

    return 0;
}
