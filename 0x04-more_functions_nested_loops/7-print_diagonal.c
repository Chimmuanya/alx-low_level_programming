#include "main.h"
#define SPACE 32
#define F_SLASH 92

/* betty style doc for function main goes there */
/**
 * print_diagonal - entry function
 * prints diagonal line of n '/'s to the console
 * @n: number of '/'s and spaces to be printed.
 * Return: void
 */
void print_diagonal(int n)
{
	int line_n = 1;
	int space_n;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (line_n < n)
	{
		space_n = line_n - 1;
		if (space_n == 0)
		{
			_putchar(F_SLASH);
			_putchar('\n');
		}
		while (space_n >= 0)
		{
			_putchar(SPACE);

			if (space_n == 0)
			{
				_putchar(F_SLASH);
				_putchar('\n');
				break;
			}

			space_n--;

		}
		line_n++;
	}
}
