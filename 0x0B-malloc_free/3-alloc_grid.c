#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of array grid
 * @height: height of array grid
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **my_ptr;
	int i, j;

	/* handle errors */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* first allocate memory to pointer of arrays */
	my_ptr = malloc(height * sizeof(int *));

	/* then allocate memory for each array of ints */
	for (i = 0; i < height; i++)
	{
		my_ptr[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			my_ptr[i][j] = 0;
		}
	}

	if (my_ptr == NULL)
		return (NULL);
	return (my_ptr);
}
