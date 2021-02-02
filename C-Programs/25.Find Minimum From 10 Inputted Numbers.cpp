#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Min=0,Cnt=0;
    printf("\n Enter 10 numbers = ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\t Enter number %d =",Cnt);
        scanf("%d",&No);

        if(Cnt==1)
        {
            Min=No;
            continue;

        }
        if(No<Min)
        {
            Min=No;
        }
    }
    printf("\n Press any key to get minimum from given numbers = ");
    getche();

    printf("\n Minimum of given number = %d",Min);

    getch();
    return 0;

}

