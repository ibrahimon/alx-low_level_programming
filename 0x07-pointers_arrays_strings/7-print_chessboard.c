#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: an array of 8 chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
