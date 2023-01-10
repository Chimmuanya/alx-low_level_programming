#include <stdlib.h>

/**
 * free_grid -function that returns a pointer to a 2 dimensional
 * array of integers.
 * @grid: 2d array to be freed.
 * @height: height of array grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
	{
		free(grid[height]);
	}

	free(grid);

}
