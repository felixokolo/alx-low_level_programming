#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitalize first letters of words in a string
 * @str: string to convert to upper
 * Return: pointer to converted string
 */

char *cap_string(char *str)
{
	int i, len;
	bool isFirst = true;

	i = 0;
	len = strlen(str);

	while (i < len)
	{
		if (isalpha(*(str + i)) && isFirst == true)
		{
			*(str + i) = toupper(*(str + i));
			isFirst = false;
		}
		else
		{
			if (isSeparator(*(str + i)))
			isFirst = true;
		}
		i++;
	}
	return (str);
}

/**
 * isSeparator - checks if a character is a separator
 * @c: character to be checked
 * Return: True if a separator
 * Fals if not a separator
 */

bool isSeparator(char c)
{
	char sep[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int i = 0;

	for (i = 0; i < sizeof(sep) / sizeof(char); i++)
	{
		if (sep[i] == c)
		return (true);
	}

	return (false);
}
