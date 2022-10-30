#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: a pointer to string area
 * @src: a pointer to string array to copy
 * @n: unmbers of byties
 * Return: a pointer to string area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			*(dest + i) = *(src + i);
		}
	}
		return (dest);
}
