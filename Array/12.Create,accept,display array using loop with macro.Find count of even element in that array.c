#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
    int i,Arr[size]={},eCnt=0;
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
         if(Arr[i]%2==0&&Arr[i]!=0)
     {
         eCnt++;
     }
     }

     printf("\n Count of even elements from given array is=%d",eCnt);

         getch();
         return 0;
}






