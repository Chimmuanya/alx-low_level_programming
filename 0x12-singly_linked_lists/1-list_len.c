#include "lists.h"

/**
 * list_len -a function that the number of elements in a list_t list
 *
 * @h: pointer to a list_t
 * Return: size_t -the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
