
/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
