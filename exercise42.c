//documentation  section
/*create simple program calculate area of cicle*/

//pre-procesor section
#include<stdio.h>

//global variable section
  
//main function section
 int main(){
     //declare variable
    float radius;
    const float pai=3.142;
    float  area;
    
     
    printf(" Enter the radius of circle: ");
    scanf("%f",&radius);
      
       
    area=pai * radius * radius;
    printf("The area of circle=%f",area);
    return 0;
 }

//user defined section
       


 