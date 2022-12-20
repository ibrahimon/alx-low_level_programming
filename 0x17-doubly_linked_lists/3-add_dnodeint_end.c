#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: the list head
 * @n: new node data
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *back;
	dlistint_t *last = *head;

	back = malloc(sizeof(dlistint_t));
	back->n = n;
	back->next = NULL;
	if (*head == NULL)
	{
		*head = back;
		return (back);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = back;
	return (back);
}
