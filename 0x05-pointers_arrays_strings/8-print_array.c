#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_array - entry function
 * prints n elements of an array of integers, followed by a new line.
 * can use printf.
 * @n:  is the number of elements of the array to be printed.
 * @a: array to be printed from.
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;


	while (index < n)
	{
		printf("%d", a[index]);
		if (index < n - 1)
			printf(", ");
		index++;
	}

	printf("\n");
}
