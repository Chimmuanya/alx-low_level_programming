#include "main.h"

/* betty style doc for function main goes there */
/**
 * _puts - entry function
 * print a string to stdout followed by a newline using putchar
 * @str: string to be printed.
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
