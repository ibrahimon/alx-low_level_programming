#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to struct
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
