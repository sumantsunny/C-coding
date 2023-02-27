
//8. Write a program to check whether a given number is a Prime number or not

   #include<stdio.h>

       int main()
       {
           int i,n, flag=0;
           printf("Enter any number:");
           scanf("%d",&n);

           for(i=2;i<=n/2;i++)                // main logic here
           {
               if(n%i==0)
               {
                   flag = 1;
                   break;
               }

           }
           if(flag==0)
           {
               printf("Prime Number");
           }
           else
              printf("Non-Prime Number");
       }
