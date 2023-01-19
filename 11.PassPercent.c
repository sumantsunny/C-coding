
/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

#include<stdio.h>

   int main()
   {
       float hindi,english,maths,science,ssc,total_marks,percentage;

       printf("Enter your subject wise marks:\n");
       scanf("%f \n %f \n %f \n %f \n %f", &hindi,&english,&maths,&science,&ssc);

       total_marks = hindi+english+maths+science+ssc;
       percentage = (total_marks/500)*100;
       if(percentage > 33)
       {
           printf("Your Total Marks is: %f and you are pass",total_marks);
       }
       else
        {
         printf("Your Total Marks is: %f and you are failed",total_marks);
        }
       return 0;
   }
