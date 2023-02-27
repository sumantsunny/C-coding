
    //3. Write a program to check whether a given number is there in the Fibonacci series or not.


       #include<stdio.h>

         int main()
         {
             int i,n,a=0,b=1,c,count=0,flag=0;
             printf("Enter number:");
             scanf("%d", &n);

             count = 2;
             while(count<n)
             {
                 c = a+b;
                 count++;
                    if(n == c)
                    {
                        flag=1;
                    }

                 a =b;
                 b =c;

             }
             if(flag==0)
             {
                    printf("No it is not a Fibonacci number");
             }
             else
                 printf("Yes it is a Fibonacci number");

         }
