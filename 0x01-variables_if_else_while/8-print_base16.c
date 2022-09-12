#include <stdio.h>

/**
 * main - main block
 * Description: Printing numbers of base 16
 * Return 0
 */

int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
		if (x == '9')
		{
			x = 'a';
			for (;x <= 'f' ; x++)
			{
				putchar(x);
			}
			break;
		}
	}

	putchar('\n');
	return (0);
}
