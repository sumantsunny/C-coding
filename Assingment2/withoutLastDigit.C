//Write a program to print a given number without its last digit.
#include<stdio.h>

 main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Actual Number:%d\n",a);
    b=a/10;
    printf("Number without unit digit:%d",b);
    return 0;
}
