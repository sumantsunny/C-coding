
   //5. Write a program to check whether two given numbers are co-prime numbers or not

        /*
           if HCF = 1
              then it is a prime number

        */


        #include<stdio.h>

          int main()
          {
              int x,y,lcm,hcf,i;
              printf("Enter two numbers: ");
              scanf("%d %d", &x,&y);

              for(i=1;i<=x*y;i++)
              {
                  if(i%x==0 && i%y == 0)
                  {
                  lcm = i;
                  hcf = (x*y)/lcm;
                  printf("HCF is %d \n",hcf );
                  if(hcf ==1)
                    {
                      printf("%d and %d  is a co-prime number",x,y);
                    }
                 else
                    printf("It is not a co-prime number");
                    break;
                  }

              }

          }
