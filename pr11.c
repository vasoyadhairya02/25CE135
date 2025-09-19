#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);

    (marks>=90 && marks<=100)?printf("\n GRADE A\n"):
        (marks>=80 && marks<90)?printf("\n GRADE B\n"):
            (marks>=70 && marks<80)?printf("\n GRADE C\n"):
                (marks>=60 && marks<70)?printf("\n GRADE D\n"):
                    (marks<60 && marks>0)?printf("\n GRADE F\n"):printf("\n you have entered invalid input");

                        return 0;


}
