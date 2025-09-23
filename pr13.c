#include <stdio.h>

int main() {
    int water_level = 0;
    int maximum_capacity = 100;
    int refill_rate = 10;

    while (water_level < maximum_capacity) {
        water_level += refill_rate;
        printf("Current water level: %d liters\n", water_level);
    }

    printf("Tank is full.\n");

    return 0;
}
