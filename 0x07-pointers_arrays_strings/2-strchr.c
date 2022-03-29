#include <string.h>
#include "main.h"

/**
 * _strchr - copies memory area
 * @s: pointer to memory to set
 * @c: pointer to memory to copy from
 * Return: pointer to dest which golds concatenated string
 */

char *_strchr(char *s, char *c)
{
	unsigned int i = 0;

	while (*(s + i) != c)
	{
		if (*(s + i) == '\0')
		return NULL;
		else
		i++;
	}

	return (s + i);
}
