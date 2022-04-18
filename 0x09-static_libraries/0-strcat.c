#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to which src is appended to
 * @src: string to be appended to dest
 * Return: pointer to dest which golds concatenated string
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
