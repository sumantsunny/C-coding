
  // 6. Write a program to calculate factorial of a number

  #include<stdio.h>

       int main()
       {
           int i,fact=1,n;
           printf("Enter the number: ");
           scanf("%d", &n);

           for(i=n;i>=1;i--)
           {
               fact = fact * i;
           }
           printf("Factorial of %d is %d", n,fact);
       }
