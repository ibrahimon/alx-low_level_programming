#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: a pointer to struct
 * @index: an index of node
 * Return: listint_t struct
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	if (!ptr || !index)
		return (NULL);
	while (ptr != NULL && count < index)
	{
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
