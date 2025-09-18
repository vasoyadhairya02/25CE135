#include <stdio.h>

int main()
{
    int length = 70,breadth=90,area,perimeter;

     area = length * breadth;
     perimeter = 2 * (length + breadth);

    printf("Calculated Area      = %d square meters\n", area);
    printf("Calculated Perimeter = %d meters\n", perimeter);

    return 0;
}
