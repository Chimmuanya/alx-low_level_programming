#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>




/**
 * print_all -a variadic function that prints everything
 * separated by a separator
 * @format: format of values to be printed.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, c = 0, j;
	char *s;
	char f_char[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (f_char[j])
		{
			if (format[i] == f_char[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
		case 's':
			s = va_arg(args, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), c = 1;
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
