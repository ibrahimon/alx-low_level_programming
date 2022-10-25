#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to pointer to struct
 * @n: an integer
 * Return: struct adress
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *back;

	ptr = *head;
	back = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	back->n = n;
	back->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = back;
	return (*head);
}
