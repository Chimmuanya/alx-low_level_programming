#include "main.h"
#define COLON 58
#define FIRST_HOUR_DIGIT_LIMIT 2
#define FIRST_MIN_DIGIT_LIMIT 5

/**
 * jack_bauer -program entry point
 * prints all the minutes of all the hours of the day to stdout.
 * Return: void
 */
void jack_bauer(void)
{
	/*declare and initialize first hour digit*/
	int first_hour = 0;

	/*loop through to declare and initialize, and print other digits*/
	while (first_hour <= FIRST_HOUR_DIGIT_LIMIT)
	{
		int second_hour = 0;

		while (second_hour < 10)
		{
			int first_min = 0;

			if (first_hour == 2 && second_hour == 4)
				break;
			while (first_min <= FIRST_MIN_DIGIT_LIMIT)
			{
				int second_min = 0;

				while (second_min < 10)
				{
					/*Now print all digits*/
					_putchar(first_hour + '0');
					_putchar(second_hour + '0');
					_putchar(COLON);

					/*minute digits*/

					_putchar(first_min + '0');
					_putchar(second_min + '0');
					_putchar('\n');
					second_min++;

				}
				first_min++;
			}
			second_hour++;
		}
		first_hour++;
	}
}
