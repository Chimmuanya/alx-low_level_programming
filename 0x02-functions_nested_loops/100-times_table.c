#include "main.h"
#define COMMA 44
#define SPACE 32



/**
 * print_int - function to print integers using _putchar
 * @n: number to be printed
 * prints integers to stdout.
 * Return: void
 */
void print_int(int n)
{

	if (n / 10)
	{
		print_int(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * print_times_table - function to print nine times using _putchar
 * prints nine times in a table.
 * @n: dimensions of times table.
 * Return: void
 */
void print_times_table(int n)
{

	int i = 0;

	if (n < 0 || n > 15)
	{
		return;
	}



	while (i <= n)
	{
		int j = 0;

		while (j <= n)
		{
			print_int(i * j);

			if (j < n)
			{
				_putchar(COMMA);
				if ((i * j) < 10) && (i * (j + 1) < 10) ||
							  (i * (j + 1) < 100))
				{
					_putchar(SPACE);
				}
				_putchar(SPACE);
				_putchar(SPACE);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
