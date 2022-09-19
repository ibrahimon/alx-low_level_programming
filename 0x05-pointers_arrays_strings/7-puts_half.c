#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the pointer og=f string
 * Return: second half
 */

void puts_half(char *str)
{
	int count = 0;
	int n, i;

	while (str[count] != '\0')
	{
		count++;
	}
	n = (count - 1) / 2;

	for (i = n; n % 2 != 0; i--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
