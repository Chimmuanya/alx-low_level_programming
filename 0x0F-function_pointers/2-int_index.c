#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/* betty style doc for function main goes there */
/**
 * int_index -function to call a function that searches fir an integer
 * @array: pointer to array of interest
 * @size: size of array
 * @cmp: pointer to callback (comparison) function.
 * Return: 1st index of the found int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
