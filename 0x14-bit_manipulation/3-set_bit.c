#include "main.h"

/* betty style doc for function main goes there */
/**
 * get_bit -returns the bit at position index of an integer
 *
 * @n: the long int to be converted and printed
 * @index: position of bit of interest in binary notation
 * Return: Returns bit integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
/* help (with permission) from Isaac Gospelin's code acknowledged*/
