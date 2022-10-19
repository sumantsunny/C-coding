#include<stdio.h>

    void main()
    {
        int dd,mm,yr;
        char s1,s2;
        printf("Enter the date in the format DD/MM/YYYY \n");
        scanf("%d %c %d %c %d",&dd,&s1,&mm,&s2,&yr);
        // printf("%d / %d / %d\n",date,month,year);
        printf("Day- %d, Month- %d, Year - %d", dd,mm,yr);
    }