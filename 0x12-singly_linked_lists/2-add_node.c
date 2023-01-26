#include "lists.h"

/**
 * add_node -a function that adds a new node at the beginning of a list_t list.
 * @str: string to store in new member of list
 * @head: pointer to a list_t
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new = malloc(sizeof(list_t));
	int j;

	if (!new)
		return (NULL);

	for (j = 1; *(s + j); j++)
		;

	new->str = s;
	new->len = j;
	new->next = *head;
	*head = new;

	return (*head);
}
