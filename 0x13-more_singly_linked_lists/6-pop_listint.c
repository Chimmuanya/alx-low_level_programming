#include "lists.h"

/**
 * pop_listint -function that deletes the head node of a listint_t linkedlist,
 * and returns the head node’s data (n).
 *
 * @head: head of listint_t
 * Return: head node's data(n) or 0 if head is NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (*head != NULL)
	{
		current = *head;
		i = current->n;
		*head = current->next;
		free(current);
		return (i);
	}
	return (0);
}
