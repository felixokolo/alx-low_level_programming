#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int i, len;

	i = 0;
	len = strlen(str);

	while (i < len)
	{
		*(str + i) = encode(*(str + i));
		i++;
	}
	return (str);
}

/**
 * encode - converts a character to leet equivalent
 * @c: character to be encoded
 * Return: converted character
 */

char encode(char c)
{
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	for (i = 0; i < (int)(sizeof(ch) / sizeof(char)); i++)
	{
		if (*(ch + i) == c)
		return (*(lt + i));
	}

	return (c);
}
