#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,dSum=0,dCnt=0,Temp=0;

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
        //After above loop temp becomes 0,so we have to reset it for further execution

        if(dCnt==3)
        {
            Temp=No;   //reset Temp
            while(Temp>0)
            {

            Dig=Temp%10;
            dSum=dSum+Dig;
            Temp=Temp/10;
        }

            printf("\nSum of digits in given number %d is =%d.",No,dSum);
        }
        else
            {

            printf("\n Given number is not 3 digit number.");

            }

       getch();
       return 0;
}


