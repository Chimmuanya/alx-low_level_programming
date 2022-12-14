#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_last_digit - entry function
 * return last digit of an integer
 * @n: integer to be processed.
 * Return: integer.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;

	last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);

}
