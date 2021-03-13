#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,OCnt=0,Temp=0;

    printf("Enter positive integer to count odd digits in it =");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
     printf("Invalid number");return-1;
    }
        while(Temp>0)
        {
            Dig=Temp%10;

            if(Dig%2==1)
            {
                OCnt++;
            }
            Temp=Temp/10;
        }
    printf("\n Count of odd digits in given number %d is = %d.",No,OCnt);

    getch();
    return 0;
}



