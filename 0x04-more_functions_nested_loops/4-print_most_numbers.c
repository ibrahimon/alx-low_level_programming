#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: 0 to 9 except 2, 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i == 2)
		{
			continue;
		}

		else if ( i == 4)
		{
			continue;
		}

		else
		{
			_putchar(i + '0');
		}
	}

		_putchar('\n');
	}
