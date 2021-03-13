#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,dCnt=0,Temp=0;

    printf("Enter +ve integer number to calculate its digits count =");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
     printf("Invalid number");return-1;
    }
        while(Temp>0)
        {
            Dig=Temp%10;
            dCnt++;
            Temp=Temp/10;
        }
    printf("\n Count of digits in given number %d is =%d.",No,dCnt);

    getch();
    return 0;
}

