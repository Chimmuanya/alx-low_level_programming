#include "lists.h"

/**
 * free_listint -function that frees a listint_t list.
 * sets head pointer to NULL
 * @head: head of listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		head = *head->next;
		free(current);
	}

	head = NULL;
}
