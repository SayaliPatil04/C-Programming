#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter a character to view message =");
    ch=getche();

    switch(ch)
    {
    case'a':
    case'A':
            printf("\n Welcome.");
            break;
    case'b':
    case'B':
            printf("\n Good morning.");
            break;

    case'c':
    case'C':
    case'd':
    case'D':
            printf("\n Happy too see you.");
            printf("\n Have nice day.");
            break;

    case'm':
    case'M':
    case'n':
    case'N':
    case'p':
    case'P':
            printf("\n Good bye.");
            break;
    default:
            printf("\n No message for such character.");
            break;
    }
          getch();
          return 0;
}







