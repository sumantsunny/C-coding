
//2. Write a program to calculate sum of first N even natural numbers

 #include<stdio.h>

        int main()
        {
            int n,i,sum=0;

            printf("Enter the number till where you need sum of even natural numbers:");
            scanf("%d", &n);

            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                sum = i + sum;
                }
            }
            printf("The sum of %d even natural number is : %d", n,sum);
            return 0;
        }
