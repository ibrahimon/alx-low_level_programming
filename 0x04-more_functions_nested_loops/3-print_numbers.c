#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: 0 to 9
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
