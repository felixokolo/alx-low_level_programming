#include <string.h>
#include "main.h"

/**
 * _strpbrk - copies memory area
 * @s: pointer to memory to set
 * @accept: pointer to memory to copy from
 * Return: pointer to dest which golds concatenated string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *pos = NULL, *prev = 0;

	while (*(accept + i) != '\0')
	{
		j = 0;
		while (*(s + j) != '\0')
		{
			if (*(accept + i) == *(s + j))
			{
				if (prev == 0)
				prev = (s + j);
				else
				{
					if (prev > (s + j))
					prev = (s + j);
				}
				break;
			}
			else
			j++;
		}
		i++;
	}
	if (prev != 0)
	return (prev);
	return (pos);
}
