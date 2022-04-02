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
	int i, ad = 0, n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (n <= 0 && argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else
		ad += n;
	}
	printf("%d\n", ad);
	return (0);
}
