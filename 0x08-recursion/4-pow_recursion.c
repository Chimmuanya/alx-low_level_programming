#include "main.h"

/* betty style doc for function main goes there */
/**
 * _pow_recursion -entry function
 * function that recursively raises x to the power of y..
 * @x: base number
 * @y: exponent or power
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}

		return (x * _pow_recursion(x, y - 1));
	}
}
