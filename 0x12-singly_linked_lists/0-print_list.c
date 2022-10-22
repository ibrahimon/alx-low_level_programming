#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a list_t list
 * @h: a struct of list_t type
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cont++;
	}
	return (cont);
}

