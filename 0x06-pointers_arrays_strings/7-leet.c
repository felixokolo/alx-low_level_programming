#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - converts a string to leet format
 * @str: string to convert to leet format
 * Return: pointer to converted string
 */

char *leet(char *str)
{
	int i, len;

	i = 0;
	len = strlen(str);

	while (i < len)
	{
		*(str + i) = convert_leet(tolower(*(str + i)));
		i++;
	}
 	return (str);
}

/**
 * convert_leet - converts a character to leet equivalent
 * @c: character to be converted
 * Return: converted character
 */

char convert_leet(char c)
{
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	char lt[] = {'4', '3', '0', '7', '1'};
	int i = 0;

	for (i = 0; i < (int)(sizeof(ch) / sizeof(char)); i++)
	{
		if (ch[i] == c)
		return (lt[i]);
	}

	return (c);
}
