#include "main.h"

/* betty style doc for function main goes there */
/**
 * get_endianness - a function that checks the endianness.
 *
 *
 * Return: Returns 1 or 0(big endian)
 */
int get_endianness(void)
{
	unsigned int y = 0x87673210;
	char *c = (char *) &y;

	if (*c == 0x10)
		return (1);
	return (0);
}
/* I acknowledge help from https://cs-fundamentals.com/ and */
/* Gospelin on baseline knowledge.*/
/* Any credit or acknowledgment of others not previously given,*/
/* including in previous projects, is deeply regretted */
