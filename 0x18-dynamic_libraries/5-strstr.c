#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: a pointer to a string area
 * @needle: a pointer to substring array
 * Return: a pointer to a substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
