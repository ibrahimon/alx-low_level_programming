#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: a pointer to pointer to header
 * @n: a new data
 * Return: a node data
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		*head->prev = new;
	*head = new;
	return (new);
}

