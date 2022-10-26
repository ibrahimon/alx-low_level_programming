#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to pointer to struct
 * Return: listint_t struct
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *nhd = *head;

	while (*head)
	{
		nhd = nhd->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = nhd;
	}
	*head = ptr;

	return (*head);
}
