#include "main.h"

/**
 * print_last_digit - prints the lst digit of a number
 *
 * @x: The int to be print
 * Return: 0
 */

int print_last_digit(int x)

{
	int last_d;


	if (x < 0)
	{
		last_d = (-1 * (x % 10));
		_putchar(last_d + '0');
		return (last_d);
	}

	
	else
	{
		last_d = (x % 10);
		_putchar(last_d + '0');
		return (last_d);
	}


}

