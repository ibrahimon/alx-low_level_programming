#include "lists.h"

/**
 * print_listint - prints all the elements pf a listint_t
 * @h: a pointer to a struct listint_t
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
