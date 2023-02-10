
//5. Write a program to print the first N odd natural numbers in reverse order.

  #include<stdio.h>

     int main()
     {
         int i,n;
         printf("Enter the value till where you want to print the odd natural numbers in reverse order: \n");
         scanf("%d", &n);

         for(i=n; i>=1; i--)
         {
             if(i%2!=0)
             {
                 printf("%d \n", i);
             }
         }
         return 0;
     }
