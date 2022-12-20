#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of the list
 * @head: the list head
 * Return: the data sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

