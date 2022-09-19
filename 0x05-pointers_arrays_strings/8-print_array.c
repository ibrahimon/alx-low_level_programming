#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array
 * @n: number of array elements
 * Return: number of elements
 */

void print_array(int *a, int n)
{
	int n;
	int a[n];

	for (n = 0; a[n]; a++)
		;

	printf("%d", n);
}
