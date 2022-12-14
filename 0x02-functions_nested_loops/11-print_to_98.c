#include "main.h"
#include "stdio.h"


/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: int to start from
 * Return: 0
 */

void print_to_98(int n)
{
	int i = 0;


	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i != n)
			{
				printf(", ");
			}

			printf("%d", i);
		}
	}
	
	else
	{
		for (n = n ; n >= 98 ; i--)
		{
			if (i != n)
			{
				printf(", ");
			}

			printf("%d, ", i);
		}
		
	}

	putchar('\n');

}
