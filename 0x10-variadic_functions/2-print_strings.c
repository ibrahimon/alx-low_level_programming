
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string between strings
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str  = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil");

		if (i < n - 1)
			if (separator)
				printf("(nil)");
	}

	printf("\n");
	va_end(valist);
}
