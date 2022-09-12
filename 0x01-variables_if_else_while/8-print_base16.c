#include <stdio.h>

/**
 * main - main block
 * Description: Printing numbers of base 16
 * Return 0
 */

int main(void)
{
	char x = '0';

	while (x <= '15')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
