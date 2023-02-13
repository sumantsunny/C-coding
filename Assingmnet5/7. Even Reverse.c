
//7. Write a program to print the first N even natural numbers in reverse order

 #include<stdio.h>

     int main()
     {
          int n,i;

          printf("Enter the number till from where you want to print the even natural number in reverse: ");
          scanf("%d", &n);

          for(i=n; i>=1;i--)
          {
              if(i%2 == 0)
              {
                  printf("%d \n",i);
              }
          }
          return 0;

     }
