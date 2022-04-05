#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - copies memory area
 * @width: pointer to memory to set
 * @height: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

int **alloc_grid(int width, int height)
{
	unsigned int i, j;
	int **r, *d;

	if (width <= 0 || height <= 0)
	return (NULL);

	d = malloc(sizeof(int) * (width * height));

	if (d == NULL)
	return (NULL);

	r = malloc(sizeof(d) * height);
	*r = d;

	for (i = 0; i < (width * height); i++)
	{
		*(d + i) = 0;
		if ((i + 1) % width == 0)
		*(r + (i + 1) / width) = d + i;
	}

	return (r);
}
