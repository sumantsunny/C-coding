
//4. Write a program to print the first 10 odd natural numbers

  #include<stdio.h>

    int main()
    {
        int count=0;
        for(int i=1;i>=count; i++)
        {

            if(i%2!=0)
            {
                printf("%d\n",i);
                count++;
            }
            if(count==10)
                break;
        }
        return 0;
    }
