#include "main.h"
#define COMMA 44
#define SPACE 32
#define TIMES 9



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
 * times_table - function to print nine times using _putchar
 * prints nine times in a table.
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= TIMES)
	{
		int j = 0;

		while (j <= TIMES)
		{
			print_int((i * j));

			if (j < TIMES)
			{
				_putchar(COMMA);
				_putchar(SPACE);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
