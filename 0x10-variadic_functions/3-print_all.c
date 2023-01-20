#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>






/**
 * _strlen - entry function
 * calculate the length of a string using only pointers
 * @s: string to be counted.
 * Return: int (length of str)
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


/**
 * print_all -a variadic function that prints everything
 * separated by a separator
 * @format: format of values to be printed.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0, n_args = _strlen(format);
	char *s, *f_char = "cifs";
	unsigned char c;

	va_start(args, format);
	while (i < n_args)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == f_char[j])
			{
				switch (format[i])
				{
				case 'c':
					c = (unsigned char) va_arg(args, int);
					printf("%c", c);
					break;
				case 's':
					s = va_arg(args, char*);
					if (!s)
						printf("(nil)");
					printf("%s", s);
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				default:
					printf("%d", va_arg(args, int));
				}
				(i < n_args - 1) ? printf(", ") :
					printf("%s", "");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
