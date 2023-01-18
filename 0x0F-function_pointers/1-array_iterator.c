#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/* betty style doc for function main goes there */
/**
 * array_iterator -function to call a function to work on each element of an ar
 * @array: pointer to array of interest
 * @size: size of array
 * @action: pointer to callback function.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
