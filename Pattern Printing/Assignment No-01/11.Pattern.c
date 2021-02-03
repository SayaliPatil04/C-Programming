#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch='\0';

    printf("\n Enter a value for pattern: ");
    scanf("%d",&c);

    printf("\n Enter a character to be printed in left lower triangular pattern: ");
    scanf(" %c",&ch);

    printf("\n......................pattern...................\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
            printf(" %c ",ch);

            }
            else
            {
            printf("   ");
            }
            }

            printf("\n");
            }

    printf("\n................................................\n");

            getch();
            return 0;
    }



