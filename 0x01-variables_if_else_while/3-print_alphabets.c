#include <stdio.h>

/**
 * main - main block
 * Descreption: printing alphabet in loxercase then in upper case
 * Return: 0 (succeed)
 */

int main(void)

{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x = 'A';
	
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}


	putchar('\n');
	return (0);
}
