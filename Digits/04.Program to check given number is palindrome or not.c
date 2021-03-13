#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,RevNum=0;

    printf("Enter +ve integer number to check whether it is palindrome number =");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
     printf("Invalid number");return-1;
    }
        while(Temp>0)
        {
            RevNum=(RevNum*10)*(Temp%10);
            Temp/=10;
        }
        if(No==RevNum)
        {
            printf("\n As %d==%d",No,RevNum);
            printf("\n Given number %d is palindrome.",No);
        }
        else
        {
            printf("\n As %d!=%d",No,RevNum);
            printf("\n Given number %d is not palindrome.",No);

        }

        getch();
        return 0;
}

