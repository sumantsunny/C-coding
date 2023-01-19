
//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.


#include<stdio.h>

  int main()
  {
      int side1, side2, side3;

      printf("Enter the sides of triangle:\n");
      scanf("%d %d %d", &side1, &side2, &side3);

      if(((side1 + side2)> side3)|| ((side2 + side3) > side1)|| (side1 + side3)>side2)
      {
          printf("It is a valid triangle");
      }
      else
        printf("It is not a valid triangle");

      return 0;

  }
