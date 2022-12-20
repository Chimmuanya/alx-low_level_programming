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
	int l, i;
	char *start;
	char *end;
	char ch;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	start = s;

	end = s + l - 1;


	for (i = 0; i < (l - 1) / 2; i++)
	{
		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end++;
	}


	while (*s != '\0')
	{
		_putchar(*s);
	}
}
