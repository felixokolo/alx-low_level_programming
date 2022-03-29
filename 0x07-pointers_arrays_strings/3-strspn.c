#include <string.h>
#include "main.h"

/**
 * _strspn - copies memory area
 * @s: pointer to memory to set
 * @accept: pointer to memory to copy from
 * Return: pointer to dest which golds concatenated string
 */

unsigned int _strspn(char *s, char *accept)
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

/**
 * check
