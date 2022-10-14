#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: index of first element, -1 if no element or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if(cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}


