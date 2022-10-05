#include "main.h"
#include <stdio.h>

/**
 * main - main
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if true
 */

int main(int argc, char *argv[])
{
	int sum, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
