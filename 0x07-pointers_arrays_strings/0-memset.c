#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s: a pointer to a string array
 * @b: char to fill with
 * @n: number of bytes
 * Return: a pointer to string array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
