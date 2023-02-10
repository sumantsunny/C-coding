//5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>

main()
{

    int a,b,sum=0,i;
    printf("Enter the number: \n");
    scanf("%d", &a);
    //Only for 3 digit numbers
   /* for(i=0;i<3;i++)
    {
        b = a%10;
        a = a/10;
        sum = sum + b;
    }*/

    sum = a%10;
      a = a/10;
    sum = (a%10) + sum;
      a = a/10;
    sum = a + sum;

    printf("Sum of Digits is: %d",sum);
    return ;
}
