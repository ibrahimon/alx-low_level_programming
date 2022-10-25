#include "lists.h"

/**
 * free_listint2 - frees listint_t with null head
 * @head: a pointer to struct
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
	printf("(nile)");
}
