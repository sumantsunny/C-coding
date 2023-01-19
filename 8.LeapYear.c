//8. Write a program to check whether a given year is a leap year or not.

  /*
     1. divisible by 4
     2. not divisible by 100
     3. Divisible by 400
  */
#include<stdio.h>

  int main()
  {
      int year;
      printf("Enter the year: \n");
      scanf("%d",&year);

      if (((year%4 == 0) && (year%100 != 0))|| (year%400 == 0))
      {
          printf("It is a leap year");
      }
      else
        printf("It is not a leap year");
      return ;
  }
