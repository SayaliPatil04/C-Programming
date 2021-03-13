#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,RevNum=0,dCnt=0;

    printf("Enter 4 digit integer number to get its reverse number =");
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
        if(dCnt==4)
        {
            Temp=No;

        while(Temp>0)
            {
            Dig=Temp%10;
            RevNum=(RevNum*10)+Dig;
            Temp=Temp/10;
            }

            printf("\n Given 4 digit number in reverse way %d = %d.",No,RevNum);
        }
        else
        {
            printf("\n Given number is not 4 digit number");
        }

    getch();
    return 0;
}
