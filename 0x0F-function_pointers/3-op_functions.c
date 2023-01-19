#include "3-calc.h"
#include <stdlib.h>


/* betty style doc for function main goes there */
/**
 * op_add -function to add 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: int
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}


/**
 * op_sub -function to subtract one int from the other
 * @a: 1st integer
 * @b: 2nd integer
 * Return: int
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;

	return (diff);
}



/**
 * op_mul -function to multiply 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: int
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;

	return (prod);
}



/**
 * op_div -function to divide 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: int
 */
int op_div(int a, int b)
{
	int quot;

	quot = a / b;

	return (quot);
}


/**
 * op_mod -function to get mod of 1st against 2nd int
 * @a: 1st integer
 * @b: 2nd integer
 * Return: int
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}
