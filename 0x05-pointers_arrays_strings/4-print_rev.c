#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a string
 * Return: Reversed string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
