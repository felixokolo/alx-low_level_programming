#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies memory area
 * @str: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	if (str == NULL)
	return (NULL);

	len = strlen(str);

	s = malloc(sizeof(char) * len);

	if (s == NULL)
	return (s);

	for (i = 0; i <= len; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
