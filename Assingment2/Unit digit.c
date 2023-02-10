//1. Write a program to print unit digit of a given number
#include<stdio.h>


void main()
{
    int a,c;
   printf("Enter the number:");
   scanf("%d",&a);
   printf("Actual Number:%d\n",a);
   c= a%10;
   printf("Unit digit is: %d",c);
   return 0;
}
