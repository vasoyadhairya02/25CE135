#include<stdio.h>
int main()
{
    int i,j;
    printf("Multiplication Table (10 x 5):\n");
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");

    }
    return 0;
}
