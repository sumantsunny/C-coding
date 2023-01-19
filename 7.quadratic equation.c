//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>

  int main()
  {
      //ax^2 +bx +c =0
    double a,b,c,discriminent;

    printf("Enter the coefficient a,b and c:");
    scanf("%lf\n%lf\n%lf", &a,&b,&c);

    discriminent = b*b -4*a*c;

    if(discriminent>0)
    {
        printf("Roots are real");
    }
    else if(discriminent == 0)
    {
        printf("Roots are Equal");
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
  }
