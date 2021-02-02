#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,r=5,c=0;
    printf("\n Enter column value for hollow star pattern :");
    scanf("%d",&c);

    printf("\n...................pattern....................\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {

        if(i==1||j==1||i==r||j==c)
        {

            printf(" * ");
        }
        else
        {
            printf("   ");
        }
        }

        printf("\n");
        }
        printf("\n..............................................\n");

        getch();
        return 0;
        }



