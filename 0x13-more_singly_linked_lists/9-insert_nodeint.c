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
	listint_t *ptr = *head, *toadd;
	unsigned int count = 0;

	toadd = malloc(sizeof(listint_t));
	if (!toadd || !head)
		return (NULL);

	toadd->n = n;
	toadd->next = NULL;

	if (idx == 0)
	{
		toadd->next = *head;
		*head = toadd;
		return (toadd);
	}

	for (count = 0; ptr && count < idx; count++)
	{
		if (count == idx - 1)
		{
			toadd->next = ptr->next;
			ptr->next = toadd;
			return (toadd);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
