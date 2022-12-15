#include "main.h"
#define UNDERSCORE 95

/* betty style doc for function main goes there */
/**
 * print_line - entry function
 * prints line of n '_'s to the console
 * @n: number of '_'s to be printed.
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
		_putchar('\n');

	while (i <= n)
	{
		_putchar(UNDERSCORE);

		i++;
	}
	_putchar('\n');
}
