#include <stdio.h>
#include<unistd.h>
void main()
{
int second;
printf("enter the number for you want set countdown: ");
scanf("%d",&second);

for(second;second;second--){
printf("%d\n",second);
sleep(1);

}
printf("Countdown Completed");
}
