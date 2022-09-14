#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0
 */

void times_table(void)

{
	int a = 0;
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
					putchar('0');
				}

				if (b != 0)
				{
					putchar(' ');
					putchar((c % 10) + '0');
				}

				if (b < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}

			else
			{
			       	putchar((c / 10) + '0');
				    putchar((c % 10) + '0');

				if (b < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

		putchar('\n');
	}

}
