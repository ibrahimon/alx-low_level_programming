#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)

{
	int a;
	int b;
	int c;

	while (a <= 9)
	{
		b = 0;
		c = a * b;

		while (b <= 9)
		{

			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar('0');
				}

				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}

				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			else
			{
			       	_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');

				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		
		_putchar('\n');
	}

}
