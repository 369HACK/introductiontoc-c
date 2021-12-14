//documentation  section
/*Nurul Athira Binti Zukifli,15/11/2021,write a program to convert the length in feet(ft) to centimetre(cm) and display the length in centimetre(cm)*/

//pre-processor section
#include<stdio.h>

//global declaration section

//main function section
 int main(){
     float lenght;
     float convert;

     printf("Enter the lenght: ");
     scanf("%f",&lenght);

     convert=lenght * 30;
     printf("convert ft to cm= %.2f",convert);

     return 0;



 }

 //User defined section
