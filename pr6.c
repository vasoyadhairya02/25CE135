#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Case 1: 0°C
    celsius = 0;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Celsius: %.2f -> Fahrenheit: %.2f\n", celsius, fahrenheit);

    // Case 2: 100°C
    celsius = 100;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Celsius: %.2f -> Fahrenheit: %.2f\n", celsius, fahrenheit);

    // Case 3: -40°C
    celsius = -40;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Celsius: %.2f -> Fahrenheit: %.2f\n", celsius, fahrenheit);

    return 0;
}
