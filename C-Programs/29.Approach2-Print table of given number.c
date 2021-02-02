#include<stdio.h>
#include<conio.h>

int main()
{

    int RN=0,CN=0,SNo=0,ENo=0;
    printf("\n Enter tables range from & to = ");
    scanf("%d%d",&SNo,&ENo);

    printf("\n Tables from %d to %d as follows = \n\n",SNo,ENo);

    for(RN=1;RN<=10;RN++)
    {
        for(CN=SNo;CN<=ENo;CN++)
    {
        printf(" %3d ",CN * RN);
    }
    printf("\n");
    }

    getch();
    return 0;

}



