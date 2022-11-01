#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: a double pointer
 * Return: the actual number of letters
 */

int main(int argc, char **argv)
{
	int f1, f2;
	int i;
	char ch[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((i = read(f1, ch, 1024)) > 0)
	{
		if (write(f2, ch, i) != i || f2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (close(f2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
