#include "lists.h"

/**
 * get_nodeint_at_index -function that returns the nth node of a
 * listint_t linked list.
 * @index: index of node of interest
 * @head: head of listint_t
 * Return: head node's data(n) or 0 if head is NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 1;

	if (!head)
		return (NULL);
	current = head;

	current = head;
	while (current)
	{
		if (index == count - 1)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
