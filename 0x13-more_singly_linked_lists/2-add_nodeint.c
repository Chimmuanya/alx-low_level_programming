#include "lists.h"

/**
 * add_nodeint -a function that adds new node at the start of a listint_t list.
 * @n: integer data to store in new member of list
 * @head: pointer to a listint_t
 * Return: address of the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int j;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
