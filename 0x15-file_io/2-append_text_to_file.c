#include "main.h"
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_size;
	char buffer[BUFF_SIZE];

	if (text_content == NULL)
	return (-1);

	fd = open(filename, O_APPEND | O_RDONLY, 600);
	if (fd < 0)
	{
		return (-1);
	}

	if (filename == NULL)
	return (1);
	w_size = write(fd, filename, strlen(text_content));
	if (w_size < 0)
	return (-1);

	return (1);
}
