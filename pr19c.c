#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=5; i>=1; i--)
    {
        for(s=0; s<5-i; s++)
            printf("  ");
        for(j=i; j>=1; j--)
            printf("%d ",j);
        for(int j=2; j<=i; j++)
            printf("%d ",j);
        printf("\n");
    }
    for(int i=2; i<=5; i++)
    {
        for(int s=0; s<5-i; s++)
            printf("  ");
        for(int j=i; j>=1; j--)
            printf("%d ",j);
        for(int j=2; j<=i; j++)
            printf("%d ",j);
        printf("\n");
    }
}
