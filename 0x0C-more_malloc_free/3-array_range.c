#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min numbber
 * #max: max number
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;

	ptr = mallo(max);
	for (i = min; i <= max; i++)
	{
		if (i > max)
			return (NULL);
		if (ptr == NULL)
			return (NULL);
		return (ptr[i]);
	}
}

