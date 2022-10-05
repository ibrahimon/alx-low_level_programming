#include "main.h"
#include <stdio.h>

/**
 * main - main
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("Error\n");
	}
	return (1);

	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = argv[1] * argv[2];
		}
		printf("%d", sum);
	}

	return (0);
}
