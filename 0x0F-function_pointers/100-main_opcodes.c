#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: holds number of variables
 * @argv: holds command strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, i;
	int (*fun)(int, char **);

	fun = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		printf("%.2x", *(unsigned char *) (fun + i));
		if (i == a)
		continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
