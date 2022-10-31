#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a file and prints to POSIX standard output
 * @filename: the file name
 * @letters: the number of letters should read and print
 * Return: integer of actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *mem;

	mem = malloc(sizeof(char) * letters);
	if (!filename)
		return (0);
	if (!mem)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, mem, letters);
	w = write(STDOUT_FILENO, mem, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(mem);
		return (0);
	}

	free(mem);
	close(o);

	return (w);
}

