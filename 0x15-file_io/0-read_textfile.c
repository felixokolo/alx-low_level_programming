#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_size, w_size;
	char buffer[BUFF_SIZE];

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	r_size = read(fd, buffer, BUFF_SIZE);
	if (r_size <= 0)
	return (0);
	buffer[r_size] = '\0';

	w_size = write(STDOUT_FILENO, buffer, letters);
	if (w_size < 0)
	return (0);

	return (w_size);
}
