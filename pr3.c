#include<stdio.h>
int main()
{
    float height,weight,BMI;
    printf("Enter the height in meters: ");
    scanf("%f",&height);
    printf("Enter the weight in kilograms: ");
    scanf("%f",&weight);

    if(height>0 && weight>0)
    {
        BMI = weight/(height*height);
        printf("The Body Mass Index is %f",&BMI);
        if(BMI < 18.5)
        {
         printf("It is in Underweight");
        }
        else if(BMI>=18.5 && BMI<=24.9)
        {
            printf("It is in Normal weight");
        }
        else if(BMI>=25 && BMI<=29.9)
        {
            printf("It is in Over weight");
        }
        else
        {
            printf("It is in Obese");
        }
    }
    else
    {
        return 1;
    }
    return 0;
}
