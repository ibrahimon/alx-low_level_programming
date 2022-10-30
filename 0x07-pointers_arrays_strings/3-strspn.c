#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer to a string area
 * @accept: a pointer to a string to count
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			count += 1;
	}
	return (count);
}
