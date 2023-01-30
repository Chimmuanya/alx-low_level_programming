#include "lists.h"

/**
 * add_nodeint_end -function adds a new node at the end of a listint_t list.
 * @n: integer to store in new member of list
 * @head: pointer to a listint_t
 * Return: address of the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
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
