#include "main.h"

/* betty style doc for function main goes there */




/**
 * print_int - function to print integers using _putchar
 * @n: integer to be printed.
 * prints integers to stdout
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
 * more_numbers - entry function
 * prints 10 rows of 0-14 to the console.
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			print_int(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
