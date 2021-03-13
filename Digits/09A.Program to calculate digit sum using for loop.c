#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,dSum=0,Temp=0;

    printf("Enter +ve integer number to calculate its digits sum =");
    scanf("%d",&No);

    if(No<0)
    {
     printf("Invalid number");return-1;
    }
    for(Temp=No;Temp>0;Temp=Temp/10)
        {
            Dig=Temp%10;

            printf("\n %d + %d= %d",dSum,Dig,(dSum+Dig));

            dSum=dSum+Dig;
        }
    printf("\n\n Sum of digits in given number %d is =%d.",No,dSum);

    getch();
    return 0;
}

