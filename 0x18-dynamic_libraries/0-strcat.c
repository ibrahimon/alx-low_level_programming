#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a char that will be cchanged
 * @src: A pointer to a char that will be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
