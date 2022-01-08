//documentation section
//Nurul Athira Binti zukifli,20/12/2021,Write a program to calculate Body Mass Index (BMI) of the person.*/
//pre-processer section 
#include<stdio.h>
#include<conio.h>
//global variable section

//main function section 
int main()
{
    float weight;
    float height;
    int answ;
    do
    {
        printf("Please Enter Weight in KILOGRAM : ");
        scanf("%f",&weight);
        printf("Enter Height in METER : ");
        scanf("%f" ,&height);
        printf("\n");

        float BMI = weight / (height*height);
        printf("Your BMI is : %0.2f " , BMI);

         if(BMI<18.5)
        {
            break;
        }
        else if(BMI >= 18.5 && BMI < 25.0)
        {
            printf("\nBMI Status : Your BMI is NORMAL " );
        }
        else if(BMI >= 25.0 && BMI < 30.0)
        {
            printf("\nBMI Status : Your BMI is OVERWEIGHT " );
        }
         else if(BMI >= 30.0 && BMI < 35.0)
        {
            printf("\nBMI Status : Your BMI is OBESSE CLASS 1 " );
        }
        else if(BMI >= 35.0 || BMI <= 40.0)
        {
            printf("\nBMI Status : Your BMI is OBESSE CLASS 2 " );
        }
        else if(BMI > 40.0)
        {   
            printf("\nBMI Status : Your BMI is OBESSE CLASS 3 " );
        }


       

        printf("\n");
        printf("Do You Want To Continue (1-Yes / 2-No) :");
        scanf(" %d",&answ);  

    } 
    while (answ == 1 );
    return 0;
}