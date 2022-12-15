#include "main.h"

#include <stdio.h>

int convert_day(int month, int day)
{
	switch (month)
	{
	case 2:
		day = 31 + day;
		break;
	case 3:
		day = 59 + day;
		break;
	case 4:
		day = 90 + day;
		break;
	case 5:
		day = 120 + day;
		break;
	case 6:
		day = 151 + day;
		break;
	case 7:
		day = 181 + day;
		break;
        case 8:
		day = 212 + day;
		break;
        case 9:
		day = 243 + day;
		break;
        case 10:
		day = 273 + day;
		break;
        case 11:
		day = 304 + day;
            break;
        case 12:
		day = 334 + day;
		break;
        default:
		break;
	}
	return (day);
}

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
	day = convert_day(month, day);
	int leap;

	if (year % 4 != 0)
		leap = 0;
	else if (year % 100 != 0)
		leap = 1;
	else if (year % 400 != 0)
		leap = 0;
	else
        {
		leap = 1;
        }

	if (leap)
	{
		if (month == 2 && day <= 60)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else if (month == 2 && day > 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month,
			       day - 31, year);
		}
	}
	else if (month == 2 && day >= 59)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}

}
