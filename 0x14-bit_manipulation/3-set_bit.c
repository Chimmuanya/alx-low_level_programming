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
	if (!n)
		return (-1);

	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;
	if (*n)
		return (1);
	else
		return (-1);
}
/**
* I acknowledge help from https://codeforwin.org/ and
* Gospelin on baseline knowledge.
* Any credit or acknowledgment of others not previously given,
* including in previous projects, is deeply regretted
*/
