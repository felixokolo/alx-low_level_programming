#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - copies memory area
 * @s1: pointer to memory to set
 * @s2: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *s;

	if (s1 == NULL)
	len1 = 0;
	else
	len1 = strlen(s1);

	if (s2 == NULL)
	len2 = 0;
	else
	len2 = strlen(s2);

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(s + i) = *(s1 + i);
	}

	for (i = 0; i < len2; i++)
	{
		*(s + len1 + i) = *(s2 + i);
	}

	*(s + len1 + len2) = '\0';

	return (s);
}
