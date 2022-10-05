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
	int sum, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;
		printf("%d\n", sum);
		return (0);
	}
}
