#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_sign - entry function
 * check if integer number is positive, negative or zero.
 * @n: int to be checked.
 * Return: int 1 if positive or 0 if zero or -1 if negative, print +, - or 0.
 */
int print_sign(int n)
{
	int plus = 43;
	int minus = 45;
	int zero = 48;


	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(minus);
		return (-1);
	}
	else
	{
		_putchar(zero);
		return (0);
	}



}
