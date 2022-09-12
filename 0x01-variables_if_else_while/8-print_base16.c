#include <stdio.h>

/**
 * main - main block
 * Description: Printing numbers of base 16
 * Return 0
 */

int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
