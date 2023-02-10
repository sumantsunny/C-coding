
//15. Write a program to check whether a given number is positive, negative or zero.

  #include<stdio.h>

     int main()
     {
         int x;
         printf("Enter any number:\n");
         scanf("%d",&x);

         if(x>0)
         {
             printf("Positive");
         }
         else if(x<0)
         {
             printf("Negative");
         }
         else
            printf("Zero");

         return 0;

     }
