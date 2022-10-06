#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: argument
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;
	ptr = malloc(sizeof(b));
	_putchar("%d\0", ptr);
}


