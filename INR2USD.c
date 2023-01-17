//11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>

main()
{
    float a,b;
    printf("Enter the amount in INR: \n");
    scanf("%f",&a);
    b=a/76.23;
    printf("Rs.%f = %f USD",a,b);
    return;

}
