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
	listint_t *ptr = *head, *nhd = *head;

	while (ptr->next != NULL && nhd->next != NULL)
	{
		ptr = ptr->next;
		nhd->next = ptr->next;
		ptr->next = *head;
		nhd = nhd->next;
	}
	return (*head);
}
