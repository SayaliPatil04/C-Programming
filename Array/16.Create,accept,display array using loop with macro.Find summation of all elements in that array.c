#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 8

int main()
{
    int i,Arr[size]={},sum=0;
    printf("\n Accept array elements=>");

    printf("\n\n====================================\n");

    for(i=0;i<size;i++)
    {
        printf("\n Enter value of %d element=",i+1);
        scanf("%d",&Arr[i]);
    }
    system("cls");

     printf("\n Display array elements=>");

     printf("\n\n====================================\n");

      for(i=0;i<size;i++)
     {
         printf("\n Value of %d element=%d",i+1,Arr[i]);
     }
     printf("\n\n====================================\n");

      for(i=0;i<size;i++)
     {
         sum+=Arr[i];
     }

     printf("\n Summation of all elements in array=%d",sum);

         getch();
         return 0;
}










