#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,ZCnt=0,ECnt=0,OCnt=0,Temp=0;

    printf("Enter positive integer to count even,odd & zeros digits in it =");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
     printf("Invalid number");return-1;
    }
        while(Temp>0)
        {
            Dig=Temp%10;

            if(Dig==0)
            {
                ZCnt++;
            }
            else if(Dig%2==0)
            {
                ECnt++;
            }
            else
            {
                OCnt++;
            }
            Temp=Temp/10;
        }
     printf("\n Count of zeros in given number %d is = %d.",No,ZCnt);
     printf("\n Count of even digits in given number %d is = %d.",No,ECnt);
     printf("\n Count of odd digits in given number %d is = %d.",No,OCnt);

    getch();
    return 0;
}




