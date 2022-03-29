#include <string.h>
#include "main.h"

/**
 * _strstr - copies memory area
 * @haystack: pointer to memory to set
 * @needle: pointer to memory to copy from
 * Return: pointer to dest which golds concatenated string
 */

char *_strpbrk(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *pos = NULL;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			while (*(needle + j) == *(haystack + i + j))
			{
				j++;
			}
			if (*(needle + j) == '\0')
			return (haystack + i);		
			else
			{
				j = 0;
				i++;
			}
		}
		else
		{
			i++;
		}
	}

	return (pos);
}
