#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
    int i,Arr[size]={},eCnt=0,oCnt=0,zCnt=0;
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
     else if(Arr[i]%2==0&&Arr[i]!=0)
     {
         oCnt++;
     }
     }
      for(i=0;i<size;i++)
     {
         if(Arr[i]==0)
     {
         zCnt++;
     }
     }

     printf("\n Count of even elements from given array is=%d",eCnt);
      printf("\n Count of odd elements from given array is=%d",oCnt);
       printf("\n Count of null elements from given array is=%d",zCnt);

         getch();
         return 0;
}









