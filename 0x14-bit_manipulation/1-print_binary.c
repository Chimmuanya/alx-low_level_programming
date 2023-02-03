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
	unsigned int i = 0;
	int len = 0;
	unsigned int base_two = 1;

	for (len = 0; *(b + len); len++)
		;
	for (len--; len >= 0; len--, base_two *= 2)
	{

		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			i += base_two;
	}
	return (i);
}
