#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - conversts a string to an integer
 * @s: a pointer to char array
 * Return: inegers
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s == NULL)
		return (0);
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] < '0' || s[i] > '9')
			continue;
		res = res * 10 + (s[i] - '0');
	}
	return (sign * res);
}
