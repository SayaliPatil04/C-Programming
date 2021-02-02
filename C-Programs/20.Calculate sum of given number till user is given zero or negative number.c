#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

   int No=0, Sum=0,Cnt=1;

     printf("\n Enter numbers to calculate their sum(will stop summation after 0/-ve input) = ");
     while(1)
     {
         printf("\n\t Enter number %d = ",Cnt);
     scanf("%d",&No);
     if(No<=0)
     {
         break;
     }
      Sum=Sum+No;
      Cnt++;
     }

     printf("\n Press any key to get summation of given numbers-");
     getche();


     printf("\n Summation of given numbers = %d",Sum);

     getch();
     return 0;
}




