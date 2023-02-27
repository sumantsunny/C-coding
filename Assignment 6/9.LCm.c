
//9. Write a program to calculate LCM of two numbers

    #include<stdio.h>

        int main()
        {
            int x,y,i;
            printf("Enter 2 number:");
            scanf("%d %d",&x,&y);

            for(i=1;i<=x*y;i++)
            {
                if(i%x ==0 && i%y ==0)
                {
                    printf("LCM of two numbers is %d", i);
                    break;
                }

            }

        }
