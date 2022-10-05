#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if true
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
