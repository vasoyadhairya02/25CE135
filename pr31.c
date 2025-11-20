
#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("Dhairya Vasoya\n");
printf("25CE135\n");
printf("------------------------------------\n");

    int n,m;
    char *name,*tname;

    printf("Please enter the number of characters your name has:");
    scanf("%d",&n);
    name = (char *)calloc(n+1,sizeof(char));
    scanf("%s",name);
    printf("Your name is:%s",name);
    printf("\nEnter the no. of characters your new name has:");
    scanf("%d",&m);
    tname = (char *)realloc(name,m+1);
    name = tname;
    scanf("%s",name);
    printf("your new name is : %s",name);

}
