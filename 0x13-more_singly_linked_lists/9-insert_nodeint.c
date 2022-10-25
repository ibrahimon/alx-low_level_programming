#include "lists.h"

/**
 * *insert_nodeint_at_index - inserys a new node at agiven position
 * @head: a pointer to pointer to struct
 * @idx: the position
 * @n: an integer to add
 * Return: a pointer to struct
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *toadd = *head;
	unsigned int count = 0;

	while (ptr)
	{
		if (count < idx)
		{
			count++;
			ptr = ptr->next;
		}
		toadd = *head;
		toadd->n = n;
		toadd->next = ptr->next;
	}
	return (toadd);
}
