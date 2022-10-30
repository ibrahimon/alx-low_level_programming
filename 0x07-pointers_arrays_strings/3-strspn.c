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
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count += 1;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
