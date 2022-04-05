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
	int i, j;
	int **r, *d;

	if (width <= 0 || height <= 0)
	return (NULL);


	r = (int **) malloc(sizeof(int *) * height + sizeof(int) * width * height);
	d = (int *) (r + height);
	if (r == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		r[i] = (d + width * i);
		for (j = 0; j < width; j++)
		{
			r[i][j] = 0;
		}
	}

	return (r);
}
