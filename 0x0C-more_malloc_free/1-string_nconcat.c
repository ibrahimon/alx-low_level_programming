#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int siz1 = 0, siz2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[siz1] != '\0')
	{
		siz1++;
	}

	while (s2[siz2] != '\0')
	{
		siz2++;
	}

	if (n > siz2)
		n = siz2;

	s = malloc((siz1 + n + 1) * sizeof(char));

	if (s == NULL)
		return (0);

	for (i = 0; i < siz1; i++)
	{
		s[i] = s1[i];
	}

	for (; i < (siz1 + n); i++)
	{
		s[i] = s2[i - siz1];
	}
	s[i] = '\0';

	return (s);
}
