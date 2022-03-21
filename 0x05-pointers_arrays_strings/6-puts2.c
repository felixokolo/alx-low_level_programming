#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Prints a string in reverse
 * @str: pointer to string to print in reverse
 * Return: void
 */

void puts2(char *str)
{
	int len, i = 0;

	len = strlen(str);
	while (i < len)
	{
		if (i % 2 == 0)
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
