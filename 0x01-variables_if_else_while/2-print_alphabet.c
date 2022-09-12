#include <stdio.h>

/**
 * main - main block
 * Description: Printingg the alphabet in lowercase
 * Return: chars
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
