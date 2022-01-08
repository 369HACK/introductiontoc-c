//documentation section
//Nurul Athira Binti zukifli,20/12/2021,Write a C program to calculate the APC that need to be paid by the researcher.*/
//pre-processer section 
#include<stdio.h>
//global variable section

//main function section 

int main()
{
  int publishingmodesection;
  char ieeememberselection;
  float fee;

  float greenopenaccess = 5000;
  float goldenopenaccess = 7000;

  do
   {
      printf("Enter the mode: [1: green open acces, 2: golden open acces]: ");
      scanf(" %d", &publishingmodesection);

      printf("IEEE Member: [Y : Yes, N : No]: ");
      scanf(" %c", &ieeememberselection);
 
       if (ieeememberselection == 'Y')  
        {
           if (publishingmodesection == 1)
            {
               fee = greenopenaccess - (greenopenaccess * 0.25);

               printf("-------OUTPUT------- \n");
               printf("Member: IEEE  Member \n");
               printf("Mode: Green Open Access \n");
               printf("Fee: RM %.2lf \n",fee);
            }
      
             else if (publishingmodesection == 2)
            {
             fee = goldenopenaccess - (goldenopenaccess * 0.25);

             printf("-------OUTPUT------- \n");
             printf("Member: IEEE  Member \n");
             printf("Mode: Golden Open Access \n");
             printf("Fee: RM %.2lf \n",fee);
            }
        }

       else if (ieeememberselection == 'N')
       {
           if (publishingmodesection == 1)
           {
               fee = greenopenaccess;

               printf("-------OUTPUT------- \n");
               printf("Member: IEEE  Member \n");
               printf("Mode: Green Open Access \n");
               printf("Fee: RM %.2lf \n",fee);
            }
        
             else if(publishingmodesection == 2)
            {
               fee = goldenopenaccess;

               printf("-------OUTPUT------- \n");
               printf("Member: IEEE  Member \n");
               printf("Mode: Golden Open Access \n");
               printf("Fee: RM %.2lf \n",fee);
            }
        }
        printf("Do you want to continue? : [1 : Yes, 0 : No]: \n");
        scanf(" %d",&publishingmodesection);

    }
   while( publishingmodesection  == 1 );

   return 0;
}