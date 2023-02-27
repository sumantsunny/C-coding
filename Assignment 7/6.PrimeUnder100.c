

    //6. Write a program to print all Prime numbers under 100



    #include<stdio.h>

       int main()
       {
           int i,n, flag=0;

           for(n=1;n<=100;n++)
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
