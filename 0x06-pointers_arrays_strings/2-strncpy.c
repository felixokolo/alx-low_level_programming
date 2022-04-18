#include <string.h>
#include "main.h"

/**
 * _strncpy - copies n characters from string scr to dest
 * @dest: string to which src is appended to
 * @src: string to be appended to dest
 * @n: number of characters to concat
 * Return: pointer to dest which golds concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
