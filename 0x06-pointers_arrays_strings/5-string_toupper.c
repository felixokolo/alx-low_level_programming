#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - converts string str to uppercase
 * @str: string to convert to upper
 * Return: pointer to converted string
 */

char *string_toupper(char *str)
{
	int i, len;

	i = 0;
	len = strlen(str);

	while (i < len)
	{
		*(str + i) = toupper(*(str + i));
		i++;
	}
	return (str);
}
