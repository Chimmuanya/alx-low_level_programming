#include "main.h"
#include <stdlib.h>

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
	list_t *n = malloc(sizeof(list_t));
	n = h;

	while (n != NULL)
	{
		s = n->str;
		l = n->len;
		count++;
		if (s == NULL)
		{
			printf("[0] (nil)");
			n = n->next;
			continue;
		}
		printf("[%i] %s", l, s);
		n = n->next;
	}
	return (count);
}
