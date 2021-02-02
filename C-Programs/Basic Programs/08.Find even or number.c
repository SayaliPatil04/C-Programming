#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:
        printf("\n Enter an integer number = ");
        scanf("%d",&Num);


        if(Num==0)
        {
            printf("\n Given number is neutral.");
            goto Up;
        }
        (Num %2==0)?
        printf("\n Given number is even."):
        printf("\n Given number is odd.");

        getch();
        return 0;
}




