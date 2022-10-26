#include "lists.h"

/**
 * delete_nodeint_at_index - delets the node at index of a listint_t
 * @head: a pointer to a pointer to struct
 * @index: the index of node to delete
 * Return: 1 if success ot -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *todel = *head, *nw = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		free(todel);
		return (1);
	}
	else
	{
		while (i < index - 1)
		{
			if (!nw || !(nw->next))
				return (-1);
			nw = nw->next;
			i++;
		}
		todel = nw->next;
		nw->next = todel->next;
		free(todel);
	}
	return (1);
}
