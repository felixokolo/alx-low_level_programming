#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - Prints an array
 * @a: pointer to array
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		printf(", ");
		i++;
	}
	printf("\n");
}
