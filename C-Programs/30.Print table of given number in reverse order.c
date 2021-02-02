#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Cnt=0;

    printf("\n Enter a number to print its table in reverse order = ");
    scanf("%d",&No);

    for(Cnt=10;Cnt>=1;Cnt--)
    {
        printf("\n\t%3d * %3d = %3d",No,Cnt,(No * Cnt));
    }
      getche();

      printf("\n\n Thanks.");
      getch();
      return 0;
}


