#include "main.h"
#include <stdlib.h>

/**
 * _calloc -a function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: number of bytes of each element
 * Return: void pointer;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		((char *) arr)[i] = 0;


	return (arr);
}
