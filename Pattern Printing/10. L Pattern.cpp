#include<stdio.h>
#include<conio.h>

int main()
{
     int i=0,j=0,c=0;

     printf("enter column value for L pattern:");
     scanf("%d",&c);


       printf("\n.....................pattern................\n\n");

           for(i=1;i<=c;i++)
         {
             for(j=1;j<=c;j++)
          {
              if(j==1||i==c)
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
         printf("\n...........................................\n");

         getch();
         return 0;

        }



