//documentation section
/*Nurul Athira Binti Zukifli,15/11/2021,calculate the roots of a quadratic equations.  Display the root of quadratic equations as an output*/

//pre-processor section
 #include<stdio.h>
 
 //Global declaration section

 //main function section
  int main(){
      int a,b,c;
      int d;
      float root1, root2;

      printf("Enter the value: ");
      scanf("%d",&a);

      printf("Enter the value:");
      scanf("%d",&b);

      printf("Enter the value:");
      scanf("%d",&c);

      

      printf("%dx^2 + %dx+ %d",a,b,c,d);

      d=sqrt(b*b-4*a*c);
      //printf("quadratic equation: ",quadraticroots);
      root1=((-b+d) / (2*a));

      root2=((-b+d)/ (2*a));

      return 0;

      //user-defined section


    
  }