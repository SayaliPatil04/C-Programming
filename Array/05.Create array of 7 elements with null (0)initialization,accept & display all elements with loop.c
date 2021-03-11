#include<stdio.h>
#include<stdlib.h>
int main()

{
int arr[7]={0};
int i=0;

for(i=0;i<7;i++)
{
    printf("\n Value of roll no.%d=%d",i+101,arr[i]);

}
getch();
system("cls");

printf("\n Enter array elements =>\n\n");

for(i=0;i<7;i++)
{
    printf("\n Enter element[%d]=",i+201);
    scanf("%d",&arr[i]);
}

for(i=0;i<7;i++)
{
        printf("\n Value of roll no.%d=%d",i+301,arr[i]);

}
printf("\n Press any key to continue......");

getch();
return 0;
}




