#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - copies memory area
 * @nmemb: pointer to memory to set
 * @size: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *r;

	if (size == 0 || nmemb == 0)
	return (NULL);


	r = malloc(size * nmemb);
	if (r == NULL)
	return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*(r + i * size) = 0;
	}

	return (r);
}
