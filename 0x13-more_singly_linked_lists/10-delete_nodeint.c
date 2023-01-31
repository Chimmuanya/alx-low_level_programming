#include "lists.h"

/**
 * delete_nodeint_at_index -function that deletes a node.
 * @index: index of node to;be deleted.
 * @head: pointer to head of listint_t
 * Return: 1(success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	prev = *head;
	current = prev->next;
	if (!current && index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	else if (!current && index > 0)
		return (-1);
	else if (index == 0)
	{
		free(prev);
		*head = current;
		return (1);
	}
	while (current)
	{
		count++;
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
	}
	return (-1);
}
