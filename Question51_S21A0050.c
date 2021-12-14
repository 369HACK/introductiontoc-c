//Documentation section
// /*Nurul Athira Binti Zukifli(S21A0050),13/12/2021,write a program when the user inserts  a number (use scanf  and declare number as integer ) and if the number is negative display "this is negative value" else "this is non negative value"*/

////PRE-PROFESSOR SECTION
#include<stdio.h>

//Global declaration section

//Main function section
    int main(){
        int number;
        printf("Enter an integer: ");
        scanf("%d",&number);

        // write your condition
        // if true the number negative 
          if (number<=0){
              printf("This is negative value");
             }
             else

             {
                 printf("this is non negative value");

             }
             return 0;

    }

    //user defined section
    