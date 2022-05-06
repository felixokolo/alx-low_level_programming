#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_t, size_r, size_w;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_t = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_t == -1)
	print_err("Error: Can't write to", argv[2], 99, fd_t);

	close_fd(fd_t);
	fd_f = open(argv[1], O_RDONLY);
	if (fd_f == -1)
	print_err("Error: Can't read from file", argv[1], 98, fd_f);
	fd_t = open(argv[2], O_APPEND | O_WRONLY);
	size_r = read(fd_f, buffer, BUFF_SIZE);

	do {
		size_w = write(fd_t, buffer, size_r);
		if (size_w == -1)
		print_err("Error: Can't write to", argv[2], 99, fd_t);
		size_r = read(fd_f, buffer, BUFF_SIZE);
		if (size_r == -1)
		print_err("Error: Can't read from", argv[1], 98, fd_f);
	} while (size_r > 0);
	close_fd(fd_f);
	close_fd(fd_t);
	return (0);
}

/**
 * close_fd - close file descriptor
 * @fd: file descriptor to close
 * Return: void
 */

void close_fd(int fd)
{
	int closer;

	closer = close(fd);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_err - print error
 * @c: error to print
 * @d: error to print
 * @exi: exit code
 * @fd: file descriptor
 * Return: void
 */

void print_err(char *c, char *d, int exi, int fd)
{
	dprintf(STDERR_FILENO, "%s %s\n", c, d);
	close_fd(fd);
	exit(exi);
}
