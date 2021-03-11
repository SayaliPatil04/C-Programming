#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
    int i,Arr[size]={},max=0,min=0;
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
         if(Arr[i]>max)
     {
         max=Arr[i];
     }
     }

         min=Arr[0];
         for(i=0;i<size;i++)
     {
         if(min>Arr[i])
     {
         min=Arr[i];
     }
     }

     printf("\n Maximum element from given array is=%d",max);
     printf("\n Minimum element from given array is=%d",min);

         getch();
         return 0;
}





