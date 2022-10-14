#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: string between numbers
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", var_arg(nums, int));
		if (separator && i < n - 1)
			printf(" %s", separator);
	}

	printf('\n');
	va_end(nums);
}

