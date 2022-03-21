#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string to print in reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len, tmp, i = 0;

	len = strlen(s) - 1;
	while ((len - i) > (len / 2))
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = tmp;
		i++;
	}
}
