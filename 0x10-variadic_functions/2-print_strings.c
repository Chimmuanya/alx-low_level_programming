#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings -a variadic function that prints all char * arguments
 * separated by a separator
 * @separator: separator char
 * @n: number of arguments passed.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (!s)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);


}
