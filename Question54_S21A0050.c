//Documentation section
/*Nurul Athira Binti Zukifli(S21A0050),13/12/2021,Determine a student’s final grade and indicate whether it is passing or failing. The final grade is calculated based on the average of four marks. If the average mark is below than 50, the grade is FAIL and vice versa. Write a program for the user to insert the value based on the described problem*/

//pre-processor section
#include<stdio.h>
#include<conio.h>

//Global declaration section

 //main function section
int main (void)
{
    char gender;
    int package;
    char answ;
    
   do
   {
       
        printf("\nPlease Enter Your Gender (F = Female / M = Male) :");
        scanf(" %c",&gender);
        //printf("\n");
        printf("Please Enter the Package (1 = Essential / 2 = Prestige) :" );
        scanf(" %d",&package);

        if (gender == 'f' || gender == 'F')
        {
             if(package == 1)
            {   
                float fee = 500.00;
                float totalFee = fee - (0.25*500.00);
                printf("----------------------RECEIPT----------------------\n");
                printf("GENDER : FEMALE \n");
                printf("PACKAGE : Essential \n");
                printf("FEE : RM %0.2f" , totalFee);
            
            }
            else if (package == 2)
            {
                float fee = 1000.00;
                float totalFee = fee - (0.25*1000.00);
                printf("----------------------RECEIPT----------------------\n");
                printf("GENDER : FEMALE \n");
                printf("PACKAGE : Prestige \n");
                printf("FEE : RM %0.2f" , totalFee);
            }
        }
        else if (gender == 'm' || gender == 'M')
        {
            if(package == 1)
            {
                float fee = 500.00;
                float totalFee = fee;
                printf("----------------------RECEIPT----------------------\n");
                printf("GENDER : MALE \n");
                printf("PACKAGE : Essential \n");
                printf("FEE : RM %0.2f" , totalFee);
            
            }
            else if (package == 2)
            {
                float fee = 1000.00;
                float totalFee = fee;
                printf("----------------------RECEIPT----------------------\n");
                printf("GENDER : MALE \n");
                printf("PACKAGE : Prestige \n");
                printf("FEE : RM %0.2f" , totalFee);
            }

        } 
        printf("\n");
        printf("Do You Want To Continue (Y/N) :");
        scanf(" %c",&answ);     
    }
     while(answ == 'y' || answ == 'Y' );
      return 0;
}

    