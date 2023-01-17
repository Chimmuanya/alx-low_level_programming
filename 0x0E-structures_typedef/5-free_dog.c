#include "dog.h"
#include <stdlib.h>


/**
 * free_dog -function that frees dog structs
 * @d: dog dog_t dog struct to be freed from memory.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
