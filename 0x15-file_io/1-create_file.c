#include "main.h"
#include <string.h>

/**
 * create_file- Create a function that creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_size;


	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 600);
	if (fd < 0)
	{
		return (-1);
	}

	if (filename == NULL)
	return (1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	w_size = write(fd, text_content, strlen(text_content));
	if (w_size < 0)
	return (-1);

	close(fd);

	return (1);
}
