#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    int No=1;

    printf("\n Enter a value for pattern: ");
    scanf("%d",&c);

    printf("\n......................pattern...................\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
                printf(" %3d ",No);
                No++;
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


