#include <stdio.h>
#include "main.h"
/**
*print_remaining_day - takes a date and prints how many days are
*left in the year taking leap years into account
*@month: month in number format
*@day: day of the month
*@year: year
*Return: void
*/
void print_remaining_day(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
day++;
}
printf(("Day of the year :  %d\n", day);
printf("Remaining days :  %d\n", 366 - day);
{
else
}
while (month == 2 && day = 60)
{
printf("invalid date :  %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year : %d\n", day);
printf("Remaining days : %d\n", 365 - days);
{
}