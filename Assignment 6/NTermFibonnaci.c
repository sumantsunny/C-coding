
//1. Write a program to find the Nth term of the Fibonnaci series.

   #include<stdio.h>

     int main()
     {
         int i,n,a=0,b=1,c=0;
         printf("Enter the number till where you need fibonnaci series:");
         scanf("%d",&n);

         for(i=2;i<=n;i++)
         {
            c = a+b;
            a = b;
            b = c;

         }
         printf("%d th term of the Fibonnaci series is: %d\n",n,c);
     }
