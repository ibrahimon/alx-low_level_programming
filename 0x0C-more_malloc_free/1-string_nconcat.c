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
	unsigned int siz1, siz2, s, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (siz1 = 0; s1[siz1] != '\0'; siz1++)
		;
	for (siz2 = 0; s2[siz2] != '\0'; siz2++)
		;

	if (n > siz2)
		n = siz2;

	s = siz1 + n;

	s = malloc(s + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		if (i < siz1)
			s[i] = s1[i];
		else
			s[i] = siz2[i - siz1];
	s[i] = '\0';

	return (s);
}
