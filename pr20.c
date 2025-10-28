#include<stdio.h>
void main()
{
    int arr[10],n,i,asum=0,esum,missing_id;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
    {
        printf("Enter the arr[%d]= ",i);
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
    }
    esum=n*(n+1)/2;

    missing_id = esum-asum;
    printf("missin id is %d",missing_id);

}
