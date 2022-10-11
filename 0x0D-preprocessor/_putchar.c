#include <unistd.h>

/**
 * _putchar - print a charchter c to stdout
 * @c: The charachter to print 
 * Return: 1 on sucsess and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
