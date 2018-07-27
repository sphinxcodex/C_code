/*LEAP YEAR TELLER PROGRAM*/
#include <stdio.h>
int main (void)
{
printf("PROGRAM THAT TELLS IF A YEAR IS A LEAP YEAR OR NOT\n");
int year,rem_4,rem_100,rem_400;
printf("input the year:");
scanf("%d",&year);
rem_4=year % 4;
rem_100 = year % 100;
rem_400 = year % 400;
if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
printf("This year is a leap year");
else
printf("its not a leap year");
}
