#include<stdio.h>

int main ()
{

    int month, year;
    printf("Enter a month and year: ");
    scanf("%d %d", &month, &year);

    if(month == 2)
    {
        if((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
        {
            printf("YES LEAP YEAR\n");

        }
        else
             printf("NOT LEAP YEAR\n");
    }
    else
    {
       printf("NOT FEBruary") ;
    }


    return 0;
}
