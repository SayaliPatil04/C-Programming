#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
    int i,Arr[size]={},src_ele=0;
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


     printf("\n Enter element to search in array=>");
     scanf("%d",&src_ele);

     for(i=0;i<size;i++)
     {
         if(src_ele==Arr[i])
         {
             break;
         }
         }
         if(i<size)
         {
             printf("\n Given element %d found at %d location",src_ele,i+1);
         }
         else
         {
              printf("\n Given element %d not found at %d location",src_ele,i+1);
         }

         getch();
         return 0;
}



