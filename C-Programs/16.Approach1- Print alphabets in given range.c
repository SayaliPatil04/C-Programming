#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Alphabets in given range =");

    for(ch='A';ch<='Z';ch++)
    {
        printf("\n %c",ch);
    }
    getch();
    return 0;
}
