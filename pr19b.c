#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5*2-1; j++)
        {
            if(j==i||(j==2*5-i))
                printf("%d",j);
            else if(i==1)
                printf("%d",j);
            else
                printf(" ");
        }

        printf("\n");
    }
}

