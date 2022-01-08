//Documentation section
/*Nurul Athira Binti zukifli, 31/12/2021,Calculate  the steak  price*/

//Pre-processor section
#include<stdio.h>

//global variable declaration

//main function section
int main(){

    int salesID;
    char typesofsteakselection;
    float weight;
    int bmsrangeselection;

    float price;
    float kilogram;
    int continueselection;
    

    

    do {
         
         
         //user need enter sales ID
     printf("Enter sales ID :    ");
     scanf(" %d", &salesID);

     //user enter types of steak
     printf("Types of steak [K:Kobe ,W:Wagyu]:   ");
     scanf (" %c", &typesofsteakselection);

     //user enter the weight
     printf("Weight [in gram]:  " );
     scanf(" %f", &weight);

     

    
     //user enter the bms range selection
     printf("BMS (Range 5-10):   ");
     scanf(" %d", &bmsrangeselection);


    if (typesofsteakselection == 'K')
    {
       if( bmsrangeselection>=5 && bmsrangeselection<=6)
       {
         price=(weight/100*40);
         weight=weight/1000;
         printf("ITADAKIMASU STEAK HOUSE RECEIPT \n");
         printf("-------------------------------------\n");
         printf("SALES ID: %d  \n",salesID);
         printf("Steak type:Kobe  \n");
         printf("Beef Marble Score(BMS): %d  \n",bmsrangeselection);
         
         printf("Weight (kg):%.2f  \n",weight);
         printf("price:RM%.2f \n",price);

       }
       
      else if( bmsrangeselection>=7 && bmsrangeselection <=8)

      {
         price=(weight/100*65);
         weight=weight/1000;
         printf("SALES ID: %d \n",salesID);
         printf("ITADAKIMASU STEAK HOUSE RECEIPT\n");
         printf("----------------------------------\n");
         printf("Steak type:Kobe  \n");
         printf("Beef Marble Score(BMS): %d \n",bmsrangeselection);
         
         printf("Weight (kg):%.2f  \n",weight);
         printf("price:RM%.2f \n",price);

        

      }

       else if ( bmsrangeselection<= 9 && bmsrangeselection>=10)
       {
         price=(weight/100*80);
         weight=weight/1000;
         printf("ITADAKIMASU STEAK HOUSE RECEIPT\n");
         printf("---------------------------------------\n");
         printf("SALES ID: %d   \n",salesID);
         printf("Steak type:Kobe  \n");
         printf("Beef Marble Score(BMS): %d \n",bmsrangeselection);
         
         printf("Weight (kg):%.2f  \n",weight);
         printf("price:RM%.2f \n",price);
        

       }
      
        

    }



    

    else if (typesofsteakselection == 'W') 
    {
     
    if ( bmsrangeselection <=5 && bmsrangeselection>=6)
    { 
     
         price=(weight/100*50);
         weight=weight/1000;
         printf("ITADAKIMASU STEAK HOUSE RECEIPT  \n");
         printf("--------------------------------------\n");
         printf("SALES ID: %d   \n",salesID);
         printf("Steak type:Wagyu  \n");
         printf("Beef Marble Score(BMS): %d \n",bmsrangeselection);
         
         printf("Weight (kg):%2f   \n",weight);
         printf("price:RM%.2f \n",price);

    }

     if ( bmsrangeselection<=7 && bmsrangeselection>=8)
     {
     
         price=(weight/100*75);
         weight=weight/1000;
         printf("ITADAKIMASU STEAK HOUSE RECEIPT  \n");
         printf("---------------------------------------------\n");
         printf("SALES ID: %d   \n",salesID);
         printf("Steak type:Wagyu  \n");
         printf("Beef Marble Score(BMS):%d  \n",bmsrangeselection);
         
         printf("Weight (kg): %2.f \n",weight);
         printf("price:RM%.2f \n",price);

     }

     if( bmsrangeselection<=9 && bmsrangeselection>=10)
     {
         price=(weight/100*90);
         weight=weight/1000;
         printf("---------ITADAKIMASU STEAK HOUSE RECEIPT------------\n");
         printf("------------------------------------------------\n");
         printf("SALES ID: %d  \n",salesID);
         printf("Steak type:Wagyu  \n");
         printf("Beef Marble Score(BMS): %d  \n",bmsrangeselection);
         
         printf("Weight (kg): %2.f  \n",weight);
         printf("price:RM%.2f \n",price);

     }

    }
     printf("---------------------------------------------------------\n");
     printf("Do you wish to continue?[ 1: Yes ,0 :No ]:  ");
     scanf("%d",&continueselection);






       }


       while(continueselection == 1);

       return 0;

     









}