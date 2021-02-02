#include<stdio.h>
#include<conio.h>


int main()
{

   int No=0, Sum=0,Cnt=0;

     printf("\n Enter 10 numbers = ");


     for(Cnt=1;Cnt<=10;Cnt++)
    {
     printf("\n\t Enter number %d = ",Cnt);
     scanf("%d",&No);
     Sum=Sum+No;
    }
     printf("\n Press any key to get summation of given numbers-");
     getche();


     printf("\n Summation of given numbers = %d",Sum);

     getch();
     return 0;
}



