//Documentation section 
/*Nurul Athira Binti Zukifli(S21A0050),13/12/2021,write a program to calculate Body Mass Index(BMI) of the person.Display their BMI category if BMI range 18.5 – 25 𝑘𝑔/𝑚2 as normal, 25 – 30 𝑘𝑔/𝑚2 as overweight, 30 – 35 𝑘𝑔/𝑚2 as obese class 1, 35 – 40 𝑘𝑔/𝑚2 as obese class 2 and > 40 𝑘𝑔/𝑚2 as obese class 3. (formula: BMI = weight (kg) / height x height (m))*/

//pre-processor section
 #include<stdio.h>
 
 //Global declaration section

 //main function section
  int main(){
      float height,weight,bmi;

      printf("Enter height in meter\n");
      scanf("%f",&height);

      printf("Enter weight in kg\n");
      scanf("%f",&weight);

      bmi= weight / (height*height);

      printf("Your Body Mass Index (BMI) is %f\n",bmi);
      if (bmi<25)    
      //{
        printf("Your BMI category is:normal\n " );

     // }
      else if(bmi>=18.5 && bmi<25) 
      //{
          printf("Your BMI category is: overweight \n");
          
      //}
       else if (bmi>=25 && bmi<30 )

    //{ 
        printf("Your BMI category is:obese class 1\n");

    //}
    else if (bmi>30 && bmi<35)
    //{
        printf("Your BMI Category is:obese 2\n");
    //}  
    else if (bmi>35 && bmi<40)
    //{
        printf("Your BMI category is:obese class 3\n");

    //}
    else if(bmi >40)

    return 0;

  }
//user defined section

    



    

