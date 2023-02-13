
//9. Write a program to print cubes of the first N natural numbers

   #include<stdio.h>

      int main()
      {
           int i,n;

           printf("Enter the number to print the cubes:");
           scanf("%d",&n);

           for(i=0;i<=n;i++)
           {
               printf("Cube of %d is %d \n", i, i*i*i);
           }
           return 0;

      }
