#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the pointer og=f string
 * Return: second half
 */

void puts_half(char *str)
{
	int count, i;

	while (str[count] != '\0')
	{
		length_of_the_string = count++;

		if (count % 2 != 0)
		{
			n = (length_of_the_string - 1) / 2;

			for (i = count; i >= n; i--)
			{
				_putchar(str[count]);
			}
			_putchar('\n');
		}
	}
}
