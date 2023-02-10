//9. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>

main()
{
    int a,b;
    printf("Enter a number: \n");
    scanf("%d", &a);
    a=a/10;
    a = a *10;

    printf("The number is: %d",a);
    return;

}
