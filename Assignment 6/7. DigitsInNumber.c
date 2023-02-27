
    //7. Write a program to count digits in a given number

      #include<stdio.h>

         int main()
         {

             int n,i;
             printf("enter any number: ");
             scanf("%d", &n);

             for( i=1;i<=n;i++)
             {
                 n = n/10;
             }
             printf("digit: %d",i);
         }
