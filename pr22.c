#include<stdio.h>
int main()
{
    char seating[5][10];
    int reserved_seats;
    int row=0, seat=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            seating[i][j] ='O';
        }
    }
    printf("Welcome to the Theater Seating Arrangement System!\n");
    printf("The theater has 5 rows and 10 seats per row.\n");
    printf("Enter the number of reserved seats: ");
    scanf("%d", &reserved_seats);
    for (int i=1;i<=reserved_seats;i++)
    {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ",i);
        scanf("%d %d", &row,&seat);
        if(row>0 && row<=5 && seat>0 && seat<=10)
        {
            seating[row-1][seat-1]= 'X';

        }
        else
        {
            printf("Invalid row or seat number. Please enter values within range\n");
            i--;
        }
    }
        printf("\nSeating Chart:\n");
        for (int i=0;i<5;i++)
        {
            printf("Row %d: ",i+1);
            for(int j=0;j<10;j++)
            {
            printf("%c ",seating[i][j]);
        }
        printf("\n");
    }
return 0;
}

