#include "main.h"
#include <stdio.h>

/**
 * print_line -  draws a stright line
 * @n: number of times draw _
 * Return: lines
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');

	}
}
