#include <stdio.h>
#include<unistd.h>
int main()
{
float distance;
int minute=0;
while(distance>=0 || minute>0){
distance+=0.5;
minute++;
printf("Minute %d : distance covered = %.1f \n", minute,distance);
sleep(1);
if (distance>=10){
printf("marathon complete");
break;
}
}
return 0;
}
