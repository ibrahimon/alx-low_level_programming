#include "main.h"
#include <stdio.h>

/**
 * puts - prints a string, followed by a new line.
 * @str: pointers to a string
 * Return: string
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}

