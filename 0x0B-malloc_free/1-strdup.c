#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer a newly allocated space in memory
 * @str: a pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\n'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
