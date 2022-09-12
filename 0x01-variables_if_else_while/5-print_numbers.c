#include <stdio.h>

/**
 * main - main block
 * Description: Printing single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}

	printf('\n');
	return (0);
}
