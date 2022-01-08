//documentation section
//Nurul Athira Binti zukifli,20/12/2021,Write a program to loop 30 students’ grade and indicate whether it is passing or failing.*/

//pre-processer section 
#include<stdio.h>
#include<conio.h>
//global variable section

//main function section 
int main()
{
    //float grade; 
    //int tot = 30;

    for(int i = 1; i<31; ++i)
    {
        int grade = 0;
        printf("Student %d Grade : " , i);
        scanf(" %d",&grade);
        //printf("\n");

        if(grade<50)
        {
            printf("Status : FAIL \n");
            printf("\n");
        }
        else if(grade >=50)
        {
            printf("Status : PASS \n");
             printf("\n");
        }
    }
    return 0;
}