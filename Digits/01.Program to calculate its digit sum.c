#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,dSum=0,Temp=0;

    printf("Enter an integer number to calculate its digits sum =");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
     printf("Invalid number");return-1;
    }
        while(Temp>0)
        {
            Dig=Temp%10;
            dSum=dSum+Dig;
            Temp=Temp/10;
        }
    printf("\n Sum of digits in given number %d is =%d.",No,dSum);

    getch();
    return 0;
}
