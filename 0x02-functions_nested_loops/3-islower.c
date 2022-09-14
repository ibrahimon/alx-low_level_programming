#include "main.h"

/**
 * int_islower - check for lowercase
 * 
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
