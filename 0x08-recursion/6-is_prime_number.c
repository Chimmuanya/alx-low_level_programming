#include "main.h"

/* betty style doc for function main goes there */



/**
 * isprime_ -function to determine prime number
 * @x: variable for storing half value of number, always n/2.
 * @n: number of interest
 * Return: int.
 */

int isprime_(int n, int x)
{

	if (x == 1)
		return (1);

	if (x == 0)
	{
		return (0);
	}
	else
	{
		if (n % x == 0)
			return (0);

		return (isprime_(n, x - 1));
	}
}


/**
 * is_prime_number -wrapper function to determine prime number
 * @n: number of interest
 * Return: int (0 if FALSE, 1 if TRUE).
 */

int is_prime_number(int n)
{


	n = isprime_(n, n / 2);

	if (n == 0)
	{
		return (0);
	}


	return (1);
}
