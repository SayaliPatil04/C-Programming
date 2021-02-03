#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    int No=0,Temp=0;

    printf("\n Enter a value for pattern: ");
    scanf("%d",&c);

    printf("\n Enter number to print table in column format: ");
    scanf("%d",&No);

    Temp=No;

    printf("\n......................pattern...................\n\n");

    for(i=1;i<=c;i++)
    {
        No=Temp;
        for(j=1;j<=c;j++)
        {
        if(i>=j)
            {
            printf(" %-3d ",No);
            No=No+Temp;
            }
        else
            {
            printf("  ");
            }
            }

            printf("\n");
            }

    printf("\n................................................\n");

            getch();
            return 0;
    }



