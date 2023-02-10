
//4. Write a program to print the first N odd natural numbers


#include<stdio.h>

     int main()
     {
         int i,n;
         printf("How much odd natural number do you want to print?\n");
         scanf("%d", &n);

         for(i=1;i<=n;i++)
         {
             if(i%2!=0)
             {
                 printf("%d \n", i);
             }
         }
         return 0;
     }
