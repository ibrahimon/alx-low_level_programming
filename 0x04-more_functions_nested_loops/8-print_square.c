#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of square
 * Return: square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i;
		i = size / 4;

		for (i = i; i < 0; i++)
		{
			_putchar(i * '#');
			_putchar('\n');
		}
	}

}

