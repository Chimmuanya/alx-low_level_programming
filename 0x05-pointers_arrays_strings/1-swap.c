#include "main.h"

/* betty style doc for function main goes there */
/**
 * swap_int - entry function
 * swap variables values using pointers.
 * @a: pointer varible 1.
 * @b:pointer variable 2.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
