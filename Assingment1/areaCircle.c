#include<stdio.h>

int main()
{
    float R, A;
    printf("Enter the radius of a circle:");
    scanf("%f",&R);
    A = 3.14*R*R;
    printf("Area of a circle is %f having the radius %f", A, R);

    return 0;
}