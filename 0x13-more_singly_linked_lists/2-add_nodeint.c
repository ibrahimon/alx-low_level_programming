#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the begininning od a listint_t
 * @head: a pointer to pointer to a struct
 * @n: an int
 * Return: listint adress
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lptr;

	lptr = malloc(sizeof(listint_t));
	if (lptr == NULL)
		return (NULL);
	lptr->n = n;
	lptr->next = *head;
	*head = lptr;

	return (*head);
}
