#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: the number of arguments
 * @argv: the array of arrguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		_putchar(argv[1]);
	}
	
	return (0);
}
