#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to which src is appended to
 * @src: string to be appended to dest
 * @n: number of characters to concat
 * Return: pointer to dest which golds concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
