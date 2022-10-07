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
	unsigned int ss1, ss2, s, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ss1 = 0; s1[ss1] != '\0'; ss1++)
		;
	for (ss2 = 0; s2[ss2] != '\0'; ss2++)
		;

	if (n > ss2)
		n = ss2;

	s = ss1 + n;

	s = malloc(s + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		if (i < ss1)
			s[i] = s1[i];
		else
			s[i] = s2[i - ss1];
	s[i] = '\0';

	return (s);
}
