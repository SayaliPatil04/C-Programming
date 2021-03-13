#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dSum=0,Temp=0;

    printf("Enter an integer number to calculate its digits sum =");
    scanf("%d",&No);

    if(No<0)
    {
     printf("Invalid number");return-1;
    }

    for(Temp=No;Temp>0;dSum+=(Temp%10),Temp/=10);

    printf("\n Sum of digits in given number %d is = %d.",No,dSum);

    getch();
    return 0;
}

