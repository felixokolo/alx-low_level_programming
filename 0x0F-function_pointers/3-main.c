#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: holds number of variables
 * @argv: holds command strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *s;
	int *fun;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	fun = get_op_fun(s);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	fun(a, b);
}
