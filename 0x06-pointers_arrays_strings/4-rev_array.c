#include "main.h"

/* betty style doc for function main goes there */
/**
 * reverse_array- entry function
 * swap/reverse n elements of an array.
 * @a: array to be reversed.
 * @n: number of elements in the array.
 * Return:int -void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;
	int *a_ptr = a;

	for (; i < n / 2; i++, j--)
	{
		temp = *(a_ptr + i);
		*(a_ptr + i) = *(a_ptr + j);
		*(a_ptr + j) = temp;
	}
}
