#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
