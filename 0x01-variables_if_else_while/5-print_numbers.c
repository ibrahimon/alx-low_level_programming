#include <stdio.h>

/**
 * main - main block
 * Description: Printing single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
