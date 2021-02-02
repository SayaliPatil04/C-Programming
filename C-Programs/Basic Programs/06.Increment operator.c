#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,num=35;
    no=num++;

    printf("\n Value of num=%d",num);
    printf("\n Value of no=%d",no);

    no=++num;

    printf("\n Value of num=%d",num);
    printf("\n Value of no=%d",no);

    getch();
    return 0;
}

