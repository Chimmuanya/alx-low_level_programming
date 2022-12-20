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

	int length = 0;
	int index;

	while (length >= 0)
	{
		if (s[length] == '\n')
			break;
		length++;
	}



	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}


	_putchar('\n');
}
