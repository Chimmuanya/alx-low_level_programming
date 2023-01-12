#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked -function that allocates memory using malloc.
 * @b: size of block?
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
