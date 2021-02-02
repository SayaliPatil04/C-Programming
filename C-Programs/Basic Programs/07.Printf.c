#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,Sum=0;

    printf("\n Enter first number=");
    scanf("%d",&No1);

    printf("\n Enter second number=");
    scanf("%d",&No2);

    Sum=No1+No2;

    printf("\n Addition of %d & %d is = %d.",No1,No2,Sum);

    getch();
    return 0;
}

