
#include<stdio.h>

void main()
{
printf("Dhairya Vasoya\n");
printf("25CE135\n");
printf("------------------------------------\n");

    FILE *f,*t;
    char ch;

    f=fopen("Note.txt","r");
    if(f==NULL)
        printf("cant't open file");
    else
    {
        fseek(f,-1,SEEK_END);
        while(1)
        {
            ch=fgetc(f);
            printf("%c",ch);
            if(fseek(f,-2,SEEK_CUR))
            {
                break;
            }
        }
    }
    fclose(f);
}



