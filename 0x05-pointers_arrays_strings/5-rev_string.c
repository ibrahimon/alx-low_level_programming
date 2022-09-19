#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: reversed string
 */

void rev_string(char *s)
{
	int i;
	int len;
	int hlf;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[i] = temp;
		i++;
	}

}
