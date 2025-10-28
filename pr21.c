#include<stdio.h>
void main()
{
    int arr[25],ce,co,cp,cn,i;
    for(i=0;i<25;i++)
    {
    printf("arr[%d]=",i );
    scanf("%d",&arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if(arr[i]>0)
        {
            cp++;
        }
        else
        {
            cn++;
        }
        if(arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }

    }
    printf("Total Number of positive numbers is %d \n ",cp);
    printf("Total number of negative numbers is %d\n",cn);
    printf("Total Number of Even numbers is %d\n",ce);
    printf("Total number of odd numbers is %d",co);
}
