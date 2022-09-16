#include "main.h"
#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0 to 100
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i == 3 && i % 3 == 0)
		{
			char z[4] = "Fizz";
			printf("%s", z);
		}

		else if (i == 5 && i % 5 == 0)
		{
			char x[4] = "Buzz";
			printf("%s", x);
		}

		else if (i % 15 == 0)
		{
			char y[8] = "FizzBuzz";
			printf("%s", y);
		}
	}

}
