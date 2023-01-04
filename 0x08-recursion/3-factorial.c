#include "main.h"

/* betty style doc for function main goes there */
/**
 * factorial -entry function
 * function that calculates factorial of a number..
 * @n: number of interest
 * Return: int, factorial of number.
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{

			return (1);
		}

		return (n * factorial(n - 1));
	}
	else if (n < 1)
	{
		return (-1);
	}
}
