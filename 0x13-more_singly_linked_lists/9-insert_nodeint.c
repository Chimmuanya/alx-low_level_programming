#include "lists.h"

/**
 * get_nodeint_at_index -function that returns the nth node of a
 * listint_t linked list.
 * @idx: index of position of interest
 * @n: data of node to be inserted
 * @head: head pointer of listint_t
 * Return: address of new node or NULL if operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count = 2;

	if (!new)
		return (NULL);

	if (*head == NULL && idx == 0)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else if (*head == NULL && idx > 0)
		return (NULL);

	current = *head;
	temp = current->next;
	while (current->next)
	{
		if (idx == count - 1)
		{
			new->n = n;
			new->next = temp;
			current->next = new;
			break;
		}
		current = current->next;
		temp = temp->next;
		count++;
	}
	return (NULL);
}
