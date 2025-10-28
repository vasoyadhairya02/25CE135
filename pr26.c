#include <stdio.h>
#include<math.h>

void triangleManager() {

    void inputSides(float *a, float *b, float *c) {
        printf("Enter the lengths of the three sides of the triangle:\n");
        scanf("%f %f %f", a, b, c);
    }

    int isValidTriangle(float a, float b, float c) {
        if ((a + b > c) && (a + c > b) && (b + c > a))
            return 1;
        else
            return 0;
    }

    float calculateArea(float a, float b, float c) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    float a, b, c;
    inputSides(&a, &b, &c);

    if (isValidTriangle(a, b, c)) {
        float area = calculateArea(a, b, c);
        printf("\n The sides form a valid triangle.\n");
        printf(" Area of the triangle = %.2f square units.\n", area);
    } else {
        printf("\n The given sides do NOT form a valid triangle.\n");
        printf("Please check the side lengths and try again.\n");
    }
}

int main() {
    printf("---- Triangle Design Validator ----\n");
    triangleManager();
    return 0;
}
