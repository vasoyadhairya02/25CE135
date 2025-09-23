#include<stdio.h>
int main()
{
    int tbalance=5000,ch,wamount;
    while(1)
    {
        printf("\nEnter 1 for withdrawing,2 for exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter amount you want to withdraw:");
            scanf("%d",&wamount);
            if(wamount<=tbalance)
            {
                tbalance=tbalance-wamount;
                printf("Remaining Balance is %d",tbalance);
            }
            else
            {
                printf("Insufficient Balance");
                return 1;
            }
            break;
        case 2:
            return 1;
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
}
