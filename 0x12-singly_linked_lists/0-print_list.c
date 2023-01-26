#include "lists.h"

/**
 * _print_list-a function that prints all the elements of a list_t list
 *
 * @h: pointer to a list_t
 * Return: size_t -the number of nodes
 */
size_t print_list(const list_t *h)
{
	char *s;
	int l = 0;
	size_t count = 0;


	while (h != NULL)
	{
		s = h->str;
		l = h->len;
		count++;
		if (s == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%i] %s\n", l, s);
		h = h->next;
	}

	return (count);
}
