#include "main.h"
include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \
 * Return: 0
 */

void print_diagonal(int n)
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (n = n; n > 0; n++)
		{
			_putchar('\');
		}
		_putchar('\n');

	}
