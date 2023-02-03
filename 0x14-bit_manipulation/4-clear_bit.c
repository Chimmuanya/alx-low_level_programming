#include "main.h"

/* betty style doc for function main goes there */
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n: the long int to be converted and printed
 * @index: position of bit of interest in binary notation
 * Return: Returns 1 or -1(error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index > 63)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
/* I acknowledge help from https://codeforwin.org/ and */
/* Gospelin on baseline knowledge.*/
/* Any credit or acknowledgment of others not previously given,*/
/* including in previous projects, is deeply regretted */
