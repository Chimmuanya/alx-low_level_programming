#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers -a variadic function that prints all int arguments
 * separated by a separator
 * @separator: separator char array
 * @n: number of arguments passed.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%d", x);
			printf("\n");
			break;
		}
		printf("%d", x);
		if (*separator != '\0')
			printf("%s", separator);
	}
	va_end(args);


}
