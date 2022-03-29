#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - copies memory area
 * @a: pointer to memory to set
 * @size: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size) + i);
		sum2 += *(a + (i * size) + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
