#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - copies memory area
 * @ptr: pointer to memory to set
 * @old_size: pointer to memory to set
 * @new_size: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *r;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	return (ptr);

	r = malloc(new_size);
	if (r == NULL)
	return (NULL);

	for (i = 0; i < old_size; i++)
	{
		*(r + i) = *((char *) ptr + i);
	}
	free(ptr);

	return ((void *) r);
}
