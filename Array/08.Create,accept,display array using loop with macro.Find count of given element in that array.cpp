#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
    int i,Arr[size]={},src_ele=0,ele_cnt=0;
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


     printf("\n Enter element to search in array to find out its count=>");
     scanf("%d",&src_ele);

     for(i=0;i<size;i++)
     {
         if(src_ele==Arr[i])
         {
             ele_cnt++;
         }
         }

             printf("\n Count of element %d in given array is=%d",src_ele,ele_cnt);

         getch();
         return 0;
}



