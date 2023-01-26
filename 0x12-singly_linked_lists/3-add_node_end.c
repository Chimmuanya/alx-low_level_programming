#include "lists.h"

/**
 * add_node_end -a function that adds a new node at the end of a list_t list.
 * @str: string to store in new member of list
 * @head: pointer to a list_t
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	int j;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	for (j = 0; *(str + j); j++)
		;
	new->str = strdup(str);
	new->len = j;
	new->next = NULL;
	current = *head;

	if (!current)
		*head = new;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
