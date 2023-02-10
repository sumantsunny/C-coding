
//18. Write a program which takes the month number as an input and display number of days in that month.

  #include<stdio.h>

      int main()
      {
          int monthNumber;
          printf("Enter the month number (between 1-12): \n");
          scanf("%d", &monthNumber);

          if(monthNumber==1 ||monthNumber==3 || monthNumber==5 || monthNumber==7 || monthNumber==8 || monthNumber==10 || monthNumber==12 )
          {
              printf(" Month having 31 days");
          }
          else if(monthNumber==4 || monthNumber==6 || monthNumber==9 || monthNumber==11)
          {
              printf("Month having 30 days");
          }
          else if(monthNumber==2)
          {
              printf("Month having 28/29 days");
          }
          else
            printf("This doesnot exist");

          return 0;

      }
