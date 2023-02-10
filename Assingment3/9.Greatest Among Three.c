//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

  #include<stdio.h>

    int main()
    {
        int a,b,c;
        printf("Enter three numbers:\n");
        scanf("%d \n%d \n %d", &a,&b,&c);

        if((a>b) && (a>c))
        {
            printf("%d is Greater among the three",a);
        }
        else if((b>a) && (b>c))
        {
            printf("%d is Greater among the three",b);
        }
        else if((a==b)|| (b==c)||(a==c))
        {

            printf("Greatest number is repeated");
        }
        else
            printf("%d is greatest among the three", c);

        return 0;
    }
