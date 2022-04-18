#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - copies memory area
 * @size: pointer to memory to set
 * @c: pointer to memory to copy from
 * Return: pointer to dest which golds concatenated string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	return (s);

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
