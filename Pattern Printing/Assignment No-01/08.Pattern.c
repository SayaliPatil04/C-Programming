#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    int No=0,Temp=0;

    printf("Enter a value for pattern: ");
    scanf("%d",&c);

    printf("Enter starting number: ");
    scanf("%d",&No);

    printf("Enter increment seed: ");
    scanf("%d",&Temp);


    printf("\n......................pattern...................\n\n");

    for(i=1;i<=c;i++)
    {
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



