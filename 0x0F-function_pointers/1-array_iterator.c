#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - excutes a function given as a parameter on array elements
 * @array: an array
 * @size: size of array
 * @action: a pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
