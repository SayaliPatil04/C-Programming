#include<stdio.h>
#include<conio.h>

int main()
{
    int sal=0,Is_Stud=0;

    printf("\n Enter your salary=");
    scanf("%d",&sal);

    printf("\n Enter 1 if you are a student=");
    scanf("%d",&Is_Stud);

    if(sal<=0)//T
    {
        if(Is_Stud==1)//F
        {
            printf("\n Candidate is student");
        }
         else
        {
            printf("\n Candidate is fresher");
        }
        }
    else
        {
        if(sal>60000)
            {
                printf("\n Candidate is an expert employee");
            }
         else
            {
                printf("\n Candidate is an beginner employee");
            }
            }
            printf("\n Thanks for interacting");

            getch();
            return 0;
}
