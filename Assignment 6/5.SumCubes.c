
// 5. Write a program to calculate sum of cubes of first N natural numbers

    #include<stdio.h>

          int main()
          {
              int n,i,sum;
              printf("Enter the number till where you need the sum of cubes of natural numbers:");
              scanf("%d",&n);

              for(i=1;i<=n;i++)
              {
                  sum = sum + (i*i*i);

              }
              printf("Sum of cubes of First %d natural numbers: %d", n,sum);
              return 0;
          }
