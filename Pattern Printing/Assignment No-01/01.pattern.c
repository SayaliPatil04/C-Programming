#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch='A';

    printf("\n enter a value for pattern: ");
    scanf("%d",&c);


        for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i>=j)
            {
            printf(" %c ",ch);

            ch++;
            }
            else
            {
            printf("  ");
            }
            }

            printf("\n");
            }

            getch();
            return 0;
            }







