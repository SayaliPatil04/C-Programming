#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,No3=0;
    printf("\n enter 3 integer number =");
    scanf("%d%d%d",&No1,&No2,&No3);

    if(No1==No2==No3)
    {
    printf("\n all 3 given numbers are equal");
    goto DWN;
    }
    if(No1>No2)
    {
        if(No1>No3)
         {
            printf("\n Max is = %d",No1);
         }
        else
         {
            printf("\n Max is = %d",No3);
         }
    }
    else if (No2>No3)
    {
            printf("\n Max is = %d",No2);
         }
         else
         {
             printf("\n Max is = %d",No3);
         }
         DWN:
             printf("\n Well Done");
            getch();
            return 0;
}

