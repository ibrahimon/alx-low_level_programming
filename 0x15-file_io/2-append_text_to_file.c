#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file name
 * @text_content: the contenet
 * Return: 1 on success or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
			if (text_content[len] == '\0')
			{
				o = open(filename, O_RDONLY | O_APPEND);
				w = write(o, text_content, len);
			}
		}
	}

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
