
//6. Write a program to print the first N even natural numbers

  #include<stdio.h>

      int main()
      {
          int n,i;

          printf("Enter the number till where you want the n even natural number: ");
          scanf("%d", &n);

          for(i=1; i<=n;i++)
          {
              if(i%2==0)
              {
                  printf("%d\n",i);
              }
          }

          return 0;
      }
