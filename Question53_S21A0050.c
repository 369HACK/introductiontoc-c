//Documentation section
/*Nurul Athira Binti Zukifli(S21A0050),13/12/2021,Determine a student’s final grade and indicate whether it is passing or failing. The final grade is calculated based on the average of four marks. If the average mark is below than 50, the grade is FAIL and vice versa. Write a program for the user to insert the value based on the described problem*/

  //pre-processor section
 #include<stdio.h>
 
 //Global declaration section

 //main function section
  int main(){
    int m1;
    int m2;
    int m3;
    int m4;
    float average;
   
    
    printf("Enter the mark of m1");
    scanf("%d,&m1");

    printf("Enter the mark of m2");
    scanf("%d,&m2");

    printf("Enter the mark of m3");
    scanf("%d,&m3");

    
    printf("Enter the mark of m4");
    scanf("%d,&m4");


    average=((m1+m2+m3+m4))/4;
    printf("the average is %f",average);

    if(average <50)
    {
      printf("passing");

    }
    else
    {
      printf("fail");
    }


  


   
   
  }

//user defined section
