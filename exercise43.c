//documentation section
/*Nurul Athira Binti Zukifli,15/11/2021,write a program that will read two sides of a rectangle(length and width) and calculate its area*/

//pre-processor section
#include<stdio.h>

//Global declaration section

//main function section
  int main(){
    
     float lenght;
     float width;
     float area;

     printf("Enter the lenght: ");
     scanf("%f",&lenght);

     printf("Enter the width: ");
     scanf("%f",&width);

     area= lenght*width;
     printf("The area of rectangle=%.2f",area);

     return 0;


  }
  //user defined section
