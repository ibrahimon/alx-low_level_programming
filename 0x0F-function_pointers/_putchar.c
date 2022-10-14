#include <unistd.h>

/**
 * _putchar - print a character c to stdout
 * @c: the character to print
 * Return: 1 on success and -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
