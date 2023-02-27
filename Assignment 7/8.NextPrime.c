

  //8. Write a program to find next Prime number of a given number

  #include<stdio.h>

       int main()
       {
           int i,n,a,flag=0;
           printf("Enter two number between which you need a prime numbers:");
           scanf("%d", &a);

           for(n=a;n<=99999;n++)
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
               break;
             }

           }


       }
