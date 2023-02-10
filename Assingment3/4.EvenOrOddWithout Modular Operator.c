//4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>

   int main()
   {
       int x;
       printf("Enter any number: \n");
       scanf("%d",&x);

       (x&1)?printf("Odd Number"):printf("Even Number");

       return 0;
   }
