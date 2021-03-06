#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory to set
 * @src: pointer to memory to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest which golds concatenated string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
