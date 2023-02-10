//5. Write a program to check whether a given number is a three digit number or not.

  #include<stdio.h>

    int main()
    {
        int x;
        printf("Enter a number:\n");
        scanf("%d", &x);

        if(x>99 && x<999)
        {
            printf("It is a three digit number");
        }
        else
            printf("It is not a three digit number");

        return 0;
    }
