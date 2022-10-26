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

	if (!(*head) || !head)
		return (-1);
	else if (index == 1)
	{
		*head = todel->next;
		free(todel);
		todel = NULL;
	}
	else
	{
		while (index != 1)
		{
			nw = todel;
			todel = todel->next;
			index--;
		}
		nw->next = todel->next;
		free(todel);
		todel = NULL;
	}
	return (1);
}
