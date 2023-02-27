
   //4. Write a program to calculate HCF of two numbers

         /*
             First find the LCM of two numbers
             then
                 LCM * HCF = x * y
                 => HCF = (x*y)/LCM
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
                  printf("HCF of two number is %d",hcf);
                  }
              }
          }
