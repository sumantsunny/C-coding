
  //2. Write a program to print first N terms of Fibonacci series

       #include<stdio.h>

         int main()
         {
             int i,n,a=0,b=1,c,count=0;
             printf("Enter number:");
             scanf("%d", &n);

             printf("First %d FIBONACCI numbers are:  \n",n);
             printf("%d\n",a);
             printf("%d \n",b);

             count = 2;
             while(count<n)
             {
                 c = a+b;
                 count++;
                 printf("%d \n",c);
                 a =b;
                 b =c;

             }

         }
