
//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.


  #include<stdio.h>

    int main()
    {
        int x;
        printf("Enter any number:\n");
        scanf("%d", &x);

        if((x%3)==0 && (x%2)==0)
        {
            printf("%d is Divisible by 3 and 2 both",x);
        }
        else
            printf("%d is not Divisible by 3 and 2 both",x);
        return 0;
    }
