#include "lists.h"

/**
 * free_listint2 -function that frees a listint_t list.
 * sets head pointer to NULL
 * @head: head of listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (*head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
