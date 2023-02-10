
//3. Write a program to print the first N natural numbers in reverse order

  #include<stdio.h>

     int main()
     {
         int i,n;
         printf("How much natural number do you want to print in reverse?\n");
         scanf("%d", &n);

         for(i=n;i>=1;i--)
         {
             printf("%d \n", i);
         }
     }
