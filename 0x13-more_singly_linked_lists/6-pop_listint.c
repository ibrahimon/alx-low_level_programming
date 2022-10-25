#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t
 * @head: a pointer of pointer of struct
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *nw = *head;
	int num;

	if (!*head || !head)
		return (0);
	if (*head)
	{
		num = (*head)-n;
		nw = (*head)->next;
		free(*head);
		*head = nw;
	}
	return (num);
}
