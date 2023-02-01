#include "lists.h"

/**
 * sum_listint -function that sums all integers in the list.
 *
 * @head: head of listint_t
 * Return: head node's data(n) or 0 if head is NULL
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (sum);
	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
