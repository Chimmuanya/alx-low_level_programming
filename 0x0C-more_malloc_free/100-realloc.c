#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated with a call to malloc
 * @old_size: old_size is the size, in bytes, of the allocated space for ptr
 * @new_size: new_size is the new size, in bytes of the new memory block
 * Return: void pointer ptr to new address of new size;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;

	/*If new_size > old_size, the “added” memory should not be initialized*/
	if (new_size > old_size)
		;
	/*If new_size == old_size do not do anything and return ptr*/
	if (new_size == old_size)
		return (ptr);
	/**
	 * if ptr is NULL, then the call is equivalent to malloc(new_size),
	 * for all values of old_size and new_size
	 */
	if (!ptr)
		ptr = malloc(new_size);
	if (!ptr)
		return (NULL);
	/**
	 * If new_size is equal to zero,and ptr is not NULL,
	 * then the call is equivalent to free(ptr). Return NULL
	 */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* then main task */
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
