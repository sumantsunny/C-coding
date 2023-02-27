
  //4. Write a program to calculate sum of squares of first N natural numbers

     #include<stdio.h>

         int main()
         {
              int n,i,sum=0;
              printf("Enter the number till where you need the sum of squares:");
              scanf("%d", &n);

              for(i=1;i<=n;i++)
              {
                  sum = sum + (i*i);

              }
              printf("Sum of squares of first %d natural numbers is : %d ", n,sum);
              return 0;
         }
