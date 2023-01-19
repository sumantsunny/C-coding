
//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

/*
    A - Z = 65 to 90
    a - z = 97 to 122
    0-9 = 48 to 57


*/

#include<stdio.h>

    int main()
    {
        char x;
        printf("Enter any character: \n");
        scanf("%c",&x);

        if(x>=97 && x<=122 )
        {
            printf("Lower Case");
        }
        else if( x>=65 && x<=90)
        {
            printf("Upper Case");
        }
        else if( x>=48 && x<=57)
        {
            printf("Digits");
        }
        else
            printf("Special Character");

        return 0;
    }
