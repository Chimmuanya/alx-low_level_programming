#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_binary -entry function
 * prints the binary form of an unsigned int without printf, modulus or '/'.
 *
 * @n: the unsigned int to be converted and printed
 *
 * Return: Returns void
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
/* help (with permission) from Isaac Gospelin's code acknowledged*/
