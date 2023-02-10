
//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

 #include<stdio.h>

    int main()
    {
        int x;
        printf("Enter any number:\n");
        scanf("%d",&x);

        if((x%7)==0 || (x%3)==0)
        {
            if((x%7)==0)
            {
            printf("Number is Divisible by 7");
            }
            else if((x%3)==0)
            {
                printf("Number is Divisible by 3");
            }
        }
        else
            printf("Number is not divisible by 7 or 3 both");

        return 0;
    }
