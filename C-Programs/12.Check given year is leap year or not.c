#include<stdio.h>
#include<conio.h>

int main()
{
    int year=0;

    printf("\n Enter year to check given year is leap year or not:");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("\n Year %d is a leap year.",year);
    }
    else
    {
        printf("\n Year %d is a not leap year.",year);
    }

    getch();
    return 0;
}

