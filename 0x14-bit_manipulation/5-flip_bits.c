#include "main.h"

unsigned int count_bits(unsigned int xor);

/* betty style doc for function main goes there */
/**
 * flip_bits - a function that returns the number of bits you u need to flip
 * to get from one number to another..
 *
 * @n: one of the numbers
 * @m: another of the numbers
 * Return: unsigned int: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, count = 0;

	count = count_bits(xor);

	return (count);
}

/**
 * count_bits - a function that returns the number of bits u need to flip
 * to get from one number to another..
 *
 * @xor: 'XOR'ed number
 *
 * Return: unsigned int: number flipped
 */

unsigned int count_bits(unsigned int xor)
{
	unsigned int count = 0;

	while (xor > 0)
	{
		count++;
		xor &= (xor - 1);
	}
	return (count);
}
/* I acknowledge help from https://geeksforgeeks.org/ and */
/* Gospelin on baseline knowledge.*/
/* Any credit or acknowledgment of others not previously given,*/
/* including in previous projects, is deeply regretted */
