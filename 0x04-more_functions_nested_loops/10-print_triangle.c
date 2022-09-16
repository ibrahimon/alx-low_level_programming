#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of traingle
 * Return: traingle
 */

void print_traingle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i, j;

		for (i = 1; i <= size; j++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			
			_putchar('\n');
		}
	}
}
