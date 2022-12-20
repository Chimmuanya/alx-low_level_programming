#include "main.h"

/* betty style doc for function main goes there */
/**
 * puts_half - entry function
 * print only the 2nd half of a string to stdout followed by a newline
 * using putchar
 * @str: string to be printed.
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int index;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	str = str - len;
	if (len % 2 == 0)
	{
		for (index = len / 2; index < len; index++)
		{
			_putchar(*(str + index));

		}
	}
	else
	{
		for (index = len / 2 + 1; index < len; index++)
		{
			_putchar(*(str + index));

		}
	}

	_putchar('\n');
}
