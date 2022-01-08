//documentation section
/*Nurul Athira Binti zukifli,20/12/2021,Write a program to determine a student’s grade and indicate whether it is passing or failing.*/ 
//global variable section


//main function section 
#include<stdio.h>
#include<conio.h>

int main()
{
    float grade;
    int answ;

    do
    {
        printf("Enter Your Grade : ");
        scanf("%f" , &grade);

        if (grade >= 50.0 )
        {
            printf("Student Grade : %0.2f" , grade );
            printf("\nStatus : PASS \n");
        }
        else
        {
            printf("Student Grade : %0.2f" , grade );
            printf("\nStatus : FAIL \n");
        }

        printf("\n");
        printf("Do You Want To Continue (1 = Yes/ 2 = No) :");
        scanf(" %d",&answ); 
    }
    while(answ == 1);
    return 0;
}