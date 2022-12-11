#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints unique combinations of  the numbers 0-9 separated by ',' and ' '
 * using only putchar.
 * Return: zero (success)
 */
int main(void)
{

    /*define the necessary variables*/
	int zero = 48;

	int ten = 58;

	int comma = 44;

	int space = 32;

	int newline = 10;

	/*
	 * loop through and print numbers to stdout with putchar; end with
	 * newline
	 */
	int i;

	for (i = zero; i < ten; i++)
	{
		int j;

		for (j = i + 1; j < ten; j++)
		{
			putchar(i);
			putchar(j);
			if (i == ten - 2 && j == ten - 1)
			{
				break;
			}
			putchar(comma);

			putchar(space);
		}
	}

	putchar(newline);

	return (0);
}
