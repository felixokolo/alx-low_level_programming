#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: holds number of variables
 * @argv: holds command strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (check_alpha(argv[1]) == 1 ||
		check_alpha(argv[2]) == 1)
	{	
		printf("Error\n");
		exit(98);
	}

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
 * check_alpha - checks if string contains
 * an alphabet
 * @s: string to check
 * Return: 1 or 0
 */

int check_alpha(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (isalpha(*(s + i)))
		return (1);
	}
	return (0);
}
