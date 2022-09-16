#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int n = 0;
	while (n < 11)
	{
		int i = 0;
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
			n++;
		}
	}
	_putchar('\n');
}
