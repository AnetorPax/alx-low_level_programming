#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;
	int day_of_year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_month[2] = 29;
	}
	if (month > 12 || month < 1)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (day > days_month[month] || day < 1)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	day_of_year = 0;

	for (i = 1; i < month; i++)
	{
		day_of_year += days_month[i];
	}
	day_of_year += day;

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", 365 - day_of_year);
}
