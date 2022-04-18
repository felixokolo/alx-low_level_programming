#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: holds number of variables
 * @argv: holds command strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
