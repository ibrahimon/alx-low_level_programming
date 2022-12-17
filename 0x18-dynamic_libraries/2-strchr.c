#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: a string array pointer
 * @c: a character
 * Return: a pointer to string area
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
