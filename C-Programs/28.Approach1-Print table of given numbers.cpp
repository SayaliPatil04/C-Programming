#include<stdio.h>
#include<conio.h>

int main()
{

    int RN=0,CN=0;
    printf("\n Tables from 9 to 15 as follows = \n\n");

    for(RN=1;RN<=10;RN++)
    {
        for(CN=9;CN<=15;CN++)
    {
        printf(" %3d ",CN * RN);
    }
    printf("\n");
    }
    getche();

    printf("\n\n Thanks");

    getch();
    return 0;

}


