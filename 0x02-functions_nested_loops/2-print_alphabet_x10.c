#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Descreption: Printing 10 times the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int c;
	int count;

	count = 0;
	while (count < 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}

		count++;
		_putchar('\n');
	}

}
