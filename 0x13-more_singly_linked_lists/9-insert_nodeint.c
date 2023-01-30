#include "lists.h"

/**
 * insert_nodeint_at_index -function that returns the nth node of a
 * listint_t linked list.
 * @idx: index of position of interest
 * @n: data of node to be inserted
 * @head: head pointer of listint_t
 * Return: address of new node or NULL if operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *next_node;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count = 2;

	if (!new)
		return (NULL);
	new->n = n, new->next = NULL;
	if (*head == NULL && idx == 0)
	{
		*head = new;
		return (*head);
	}
	else if (*head == NULL && idx > 0)
		return (NULL);
	current = *head, next_node = current->next;
	if ((!next_node) && idx == 1)
	{
		new->next = NULL, current->next = new;
	}
	if (idx == 0)
	{
		current = *head, *head = new, (*head)->next = current;
		return (new);
	}
	while (next_node)
	{
		if (idx == count - 1)
		{
			new->next = next_node, current->next = new;
			return (new);
		}
		current = current->next, next_node = next_node->next, count++;
	}
	if (count == idx + 1)
	{
		new->next = NULL, current->next = new;
		return (new);
	}
	return (NULL);
}
