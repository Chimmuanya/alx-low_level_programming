#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints the numbers 0-9 separated by ',' and ' ' using only putchar.
 * Return: zero (success)
 */
int main(void)
{
	/*initialize 4 variables for number, comma, newline, and space.*/
	int n = 48;

	int comma = 44;

	int newline = 10;

	int space = 32;

	/*print 0 to 9 to stdout*/
	while (n <= 57)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(comma);

			putchar(space);
		}

		n++;
	}
	putchar(newline);
	return (0);
}
