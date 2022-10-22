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
	list_t *temp;
	size_t cont;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	if (head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->str = strdup(str);
	}
	for (cont = 0; str[cont]; cont++)
		;
	temp->len = cont;
	temp->next = *head;
	*head = temp;
	return (*head);
}
