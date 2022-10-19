#include<stdio.h>

int main(){
     int hh,mm;
     char c;
     printf("Enter Time in the format HH:MM \n");
     scanf("%d %c %d", &hh, &c, &mm);
     printf("%d hour and %d minute", hh, mm);
  return 0;
}