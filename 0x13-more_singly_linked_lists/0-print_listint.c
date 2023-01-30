#include "lists.h"

/**
 * print_listint -a function that prints all the elements of a listint_t list
 *
 * @h: pointer to a listint_t
 * Return: size_t -the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	size_t count = 0;


	while (h != NULL)
	{
		i = h->n;
		count++;
		printf("%i\n", i);
		h = h->next;
	}

	return (count);
}
