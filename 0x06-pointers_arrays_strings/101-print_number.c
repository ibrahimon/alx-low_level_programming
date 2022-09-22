#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putcahr(45);
		m = n * -1;
	}

	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
