#include "main.h"
#include <stdlib.h>

/**
 * array_range -a function that creates an array of integers from min to max.
 * @min: minimum integer number
 * @max: max integer number
 * Return: pointer to int array;
 */
int *array_range(int min, int max)
{
	int size, i;
	int *ptr;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		*(ptr + i) = min;

	return (ptr);
}
