#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if true
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (arg == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;

	}
	printf("%d\n", ncoins);
	return (0);
}

