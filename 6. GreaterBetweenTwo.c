//6. Write a program to print greater between two numbers. Print one number if both are the same.

  #include<stdio.h>

    int main()
    {

        int x,y;
        printf("Enter two numbers:\n");
        scanf("%d\n%d",&x,&y);

        if(x==y)
        {
            printf("same number:%d",x);
        }
        else if(x>y)
        {
            printf("%d is greater than %d",x,y);
        }
        else
            printf("%d is greater than %d",y,x);
        return ;
    }
