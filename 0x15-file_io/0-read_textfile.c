#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 *
 * Author: Renish
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	int write_file = write(fd, text_content, i);

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(fd, text_content, i);

	if (fd == -1 || write_file == -1)
		return (-1);

	close(fd);

	return (1);
}
