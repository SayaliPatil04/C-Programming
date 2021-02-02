#include<stdio.h>
#include<conio.h>

int main()
{
    char day='0';
    printf("\n Enter day number(1-7)to view day text=");
    scanf("%c",&day);

    switch(day)
    {
    case'1':
        printf("\nMonday");

        break;
    case'2':
        printf("\nTuesday");
        break;
    case'3':
        printf("\nWednesday");
        break;
    case'4':
        printf("\nThursday");
        break;
    case'5':
        printf("\nFriday");
        break;
    case'6':
        printf("\nSaturday");
        break;
    case'7':
        printf("\nSunday");
        break;
    default:
        printf("\ninvalid day");
        break;
    }
    printf("\n\nThanks");
    getch();
    return 0;
}
