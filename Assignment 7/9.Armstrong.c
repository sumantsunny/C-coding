

   //9. Write a program to check whether a given number is an Armstrong number or not

   #include<stdio.h>

       int main()
       {
           int i,n,r,arm,sum=0,ori;
           printf("Enter any number: ");
           scanf("%d",&n);
           ori = n;

           for(i=100;i<=999;i++)
           {
               r = n%10;
               n = n/10;
               sum = sum + r*r*r;

           }
            //printf("%d\n",sum);
            if(sum == ori)
                printf("%d is an armstrong number",ori);
            else
                printf("%d is not an armstrong number",ori);

       }
