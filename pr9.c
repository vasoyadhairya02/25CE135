#include <stdio.h>
int main()
{
    float total_amount,discount=0.0,final_amount;
    printf("welcome to the shop ease online");
    printf("your total amount is :");
    scanf("%f",&total_amount);

    if (total_amount<1000)
    {
        discount=0;
        printf("discount is not applied");

    }
    else if(total_amount>=1000 && total_amount<=5000)
    {
        discount=0.1*total_amount;
        printf("10%% discount is been applied");
    }
    else
    {
        discount=0.2*total_amount;
        printf("20%%discount is been applied");
    }
    final_amount=total_amount-discount;
    printf("your total amount is %f\n",total_amount);
    printf("discount applied is %f\n",discount);
    printf("your final amount after discount is %f\n",final_amount);
    return 0;
}
