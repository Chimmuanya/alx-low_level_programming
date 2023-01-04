#include "main.h"

/* betty style doc for function main goes there */

/**
 * myroot -function to calculate the sqrt of a perfect square
 * @x: variable for storing odd numbers, always 1.
 * @n: perfect square number
 * Return: square root or a large negative number.
 */

int myroot(int n, int x)
{

	if (n == 0)
	{
		return (0);
	}
	else if (n < x)
	{
		return (-30000000);
	}

	return (1 + myroot(n - x, x + 2));
}





/**
 * _sqrt_recursion -entry function
 * function that recursively calculates the sqrt of a natural square number..
 * @n: number
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	n = myroot(n, 1);

	if (n == 0)
	{
		return (0);
	}

	if (n < 0)
		return (-1);

	return (n);
}
