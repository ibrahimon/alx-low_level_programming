#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @char: a char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int pos;
	char *buffer;

	if (size == 0)
	{
		return (NULL)
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		pos = 0;
		while (pos < size)
		{
			*(buffer + pos) = c;
			pos++;
		}

		return (buffer);
	}
}

