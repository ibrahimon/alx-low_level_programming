#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file followed by new line
 *
 * Return: 0 on success
 */

#define __FILE__

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
