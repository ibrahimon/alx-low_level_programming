#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
