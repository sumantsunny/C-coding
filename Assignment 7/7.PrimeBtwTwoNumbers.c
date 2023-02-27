

    //7. Write a program to print all Prime numbers between two given numbers

    #include<stdio.h>

       int main()
       {
           int i,n,a,b, flag=0;
           printf("Enter two number between which you need a prime numbers:");
           scanf("%d %d", &a,&b);

           for(n=a;n<=b;n++)
           {
               flag =0;
               for(i=2;i<=n/2;i++)                // main logic here
           {
               if(n%i==0)
               {
                   flag = 1;
                   break;
               }

           }
           if(flag==0 && n!=0)
             {
               printf("%d \n",n);
             }

           }


       }
