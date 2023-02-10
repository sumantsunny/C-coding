//1. Write a program to check whether a given number is positive or non positive.

#include<stdio.h>

   int main()
   {
       int a;
       printf("Enter the number: \n");
       scanf("%d",&a);

       if(a>0)
       {
           printf("Positive number");
       }
       else if(a<0)
       {
           printf("Number is negative");
       }
       else
          printf("Number is non-positive");

       return 0;
   }
