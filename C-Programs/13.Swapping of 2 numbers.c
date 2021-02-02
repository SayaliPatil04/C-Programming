#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0,Num2=0,Temp=0;

    printf("\n Enter 2 numbers for swapping = ");
    scanf("%d%d",&Num1,&Num2);

    printf("\n Before swap first number =%d.",Num1);
    printf("\n Before swap second number =%d.",Num2);

    Temp=Num1;
    Num1=Num2;
    Num2=Temp;

    printf("\n After swap first number =%d.",Num1);
    printf("\n After swap second number =%d.",Num2);

    getch();
    return 0;
}

