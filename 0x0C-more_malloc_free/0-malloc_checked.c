#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - copies memory area
 * @b: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	if (b == 0)
	return (NULL);

	i = malloc(b);

	if (i == NULL)
	exit(98);

	return (i);
}
