#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t
 * @head: a pointer of pointer of struct
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *nw = *head;

	if (!*head)
		return (0);
	if (*head)
	{
		nw = (*head)->next;
		free(*head);
		*head = nw;
	}
	return ((*head)->n);
}
