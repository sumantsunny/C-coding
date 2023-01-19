//2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

     int main()
     {
         int x;
         printf("Enter any number: \n");
         scanf("%d",&x);

         if(x/5)
         {
             printf("Number is divisible by 5");
         }
         else
            printf("Number is not divisible by 5");
         return 0;

     }
