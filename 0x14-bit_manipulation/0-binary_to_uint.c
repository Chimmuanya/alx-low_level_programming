#include "main.h"

/* betty style doc for function main goes there */
/**
 * binary_to_uint -entry function
 * converts a binary number to an unsigned int.
 * fills the first n bytes of the memory area pointed to by s with
 * @b: the constant char holding the bin num
 *
 * Return: Returns the unsigned int
 */
unsigned int binary_to_uint(const char *b)
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
