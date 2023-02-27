
//10. Write a program to print all Armstrong numbers under 1000

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int temp = num;
    int sum = 0;
    int digits = 0;

    // count the number of digits in the number
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // calculate the sum of each digit raised to the power of the number of digits
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // if the sum is equal to the original number, it is an Armstrong number
    if(sum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    printf("Armstrong numbers under 1000:\n");
    for(int i=0; i<1000; i++) {
        if(isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
