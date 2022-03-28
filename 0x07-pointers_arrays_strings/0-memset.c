#include <string.h>
#include "main.h"

/**
 * _memset - copies memory area
 * @s: pointer to memory to set
 * @b: pointer to memory to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest which golds concatenated string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
