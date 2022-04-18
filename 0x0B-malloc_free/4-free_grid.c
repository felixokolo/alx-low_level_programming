#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - copies memory area
 * @grid: pointer to memory to set
 * @height: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

void free_grid(int **grid, int height __attribute__ ((unused)))
{
	free(grid);
}
