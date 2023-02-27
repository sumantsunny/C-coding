
  //1. Write a program to calculate sum of first N natural numbers

     #include<stdio.h>

        int main()
        {
            int n,i,sum=0;

            printf("Enter the number till where you need sum of natural numbers:");
            scanf("%d", &n);

            for(i=1;i<=n;i++)
            {
                sum = i + sum;
            }
            printf("The sum of %d natural number is : %d", n,sum);
            return 0;
        }
