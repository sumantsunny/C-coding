
//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

/*profit = S.P - C.P
 profit % = (profit*100)/C.P

*/

#include<stdio.h>

   int main()
   {
       float cp,sp,profit,profitP;

       printf("Enter Cost Price and Selling Price of the product:\n");
       scanf("%f \n %f", &cp,&sp);

       profit = sp - cp;
       profitP = (profit*100)/cp;
       if(profit>0)
       {

           printf("Profit percentage = %f",profitP);
       }
       else
         printf("Loss percentage = %f",profitP);

       return 0;
   }
