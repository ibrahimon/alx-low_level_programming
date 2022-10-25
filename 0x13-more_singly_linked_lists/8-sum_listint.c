#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n
 * @head: a pointer to node
 * Return: int sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

