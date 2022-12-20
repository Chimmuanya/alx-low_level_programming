#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_rev - entry function
 * print a string in reverse to stdout followed by a newline using putchar
 * @s: string to be printed.
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
