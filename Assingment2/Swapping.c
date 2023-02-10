//Write a program to swap values of two int variables
#include<stdio.h>

main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
     printf("Number before Swapping a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;

    printf("Number after Swapping a=%d and b=%d",a,b);

    return 0;


}
