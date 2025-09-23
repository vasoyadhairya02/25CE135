#include <stdio.h>
void main()
{
    int matchstick=21;
    int user_pick,com_pick;
    printf("welcome to the matchstick game\n");
    printf("there are 21 matchsticks and one by one you have to pick\n");
    printf("pick 1,2,3 or 4 matchsticks \npick on your turn\n ");

    while(matchstick>0)
    {
        printf("remaining matchsticks are : %d\n",matchstick);
        printf("it is your turn to choose matchstick: ");
        scanf("%d",&user_pick);

        if (user_pick>matchstick||user_pick<0||user_pick>4)
        {
            printf("invalid input! please enter the number between 1 to 4");
            continue;
        }
        matchstick-=user_pick;
        printf("remaining sticks are %d \n",matchstick);
        if(matchstick==1)
        {
            printf("You loose the game");
        }
        com_pick=5-user_pick;
        matchstick -= com_pick;
        printf("computer turn %d \n",com_pick);
        if(matchstick==1)
        {


            printf("you are forced to pick the last matchstick\n");
            printf("you lose the game \n");
            break;
        }
    }
}

