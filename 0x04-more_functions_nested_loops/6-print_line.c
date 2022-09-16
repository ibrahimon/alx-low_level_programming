#include "main.h"
#include <stdio.h>

/**
 * print_line: draws a stright line 
 * @n: number of times draw _
 * Return: line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}

}
