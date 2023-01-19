
//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

/*
   a - z = 97 to 122
   A - Z = 65 to 90
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
        else
            printf("Special Character");

        return 0;
    }
