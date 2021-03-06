#include "main.h"

/**
 * read_textfile- function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of file to read
 * @letters: number of characters to read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_size, w_size, total = 0;
	char buffer[BUFF_SIZE];

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	if (letters < BUFF_SIZE)
	{
		r_size = read(fd, buffer, letters);
		if (r_size == -1)
		return (0);
		w_size = write(STDOUT_FILENO, buffer, r_size);
		if (w_size == -1 || w_size != r_size)
		return (0);
		total += w_size;
	}
	else
	{
		while (letters > BUFF_SIZE || letters > 0)
		{
			r_size = read(fd, buffer, (letters > BUFF_SIZE) ? BUFF_SIZE : letters);
			if (r_size == 0)
				break;
			if (r_size == -1)
			return (0);
			w_size = write(STDOUT_FILENO, buffer, r_size);
			if (w_size == -1 || w_size != r_size)
			return (0);
			letters -= BUFF_SIZE;
			total += w_size;
		}
	}
	close(fd);
	return (total);
}
