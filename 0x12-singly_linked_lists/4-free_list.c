#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer of head pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	while ((nod = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
