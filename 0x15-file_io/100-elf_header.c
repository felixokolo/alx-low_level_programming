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
	int fd, size_r;
	char buffer[BUFF_SIZE];

	if (argc != 2)
	print_err("Usage: elf_header", "elf_filename", 98);
	fd = open(argv[2], O_RDONLY);
	if (fd == -1)
	print_err("Error: Can't open elf file", argv[1], 98);
	size_r = read(fd, buffer, BUFF_SIZE);
	if (size_r == -1)
	{
		print_err("Error: Can't read elf file", argv[1], 98);
		close_fd(fd);
	}

	if (buffer[1] != 'E' ||
			buffer[2] != 'L' ||
			buffer[3] != 'F')
	{
		print_err(argv[1], "Not ELF file", 98);
		close_fd(fd);
	}

	close_fd(fd);
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
		printf("Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_err - print error
 * @c: error to print
 * @d: error to print
 * @exi: exit code
 * Return: void
 */

void print_err(char *c, char *d, int exi)
{
	printf("%s %s\n", c, d);
	exit(exi);
}
