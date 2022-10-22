#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: a pointer to head pointer
 * @str: string of the node
 * Return: list_t struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	size_t cont;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (cont = 0; str[cont]; cont++)
		;
	new->len = cont;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
