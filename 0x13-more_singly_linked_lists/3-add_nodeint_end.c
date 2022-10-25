#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to pointer to struct
 * @n: an integer
 * Return: struct adress
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *back = *head;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (back->next != NULL)
	{
		back = back->next;
	}
	back->next = ptr;

	return (ptr);
}
