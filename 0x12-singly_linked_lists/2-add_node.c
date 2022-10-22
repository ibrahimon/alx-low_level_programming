#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the begining of a list_t
 * @head: pointer of head pointer
 * @str: pointer to struct string
 * Return: list_t struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t cont;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (cont = 0; str[cont]; cont++)
		;
	temp->len = cont;
	temp->next = *head;
	*head = temp;
	return (*head);
}
