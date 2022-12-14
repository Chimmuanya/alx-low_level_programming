#include "main.h"

/* betty style doc for function main goes there */
/**
 * puts2 - entry function
 * print every other character of a string to stdout followed by a newline
 * using putchar
 * @str: string to be printed.
 * Return: void
 */
void puts2(char *str)
{
	int mod = 0;

	while (*str != '\0')
	{
		if (mod % 2 == 0)
			_putchar(*str);
		str++;
		mod++;
	}

	_putchar('\n');
}
