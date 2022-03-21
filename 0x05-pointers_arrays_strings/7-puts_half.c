#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints a string in reverse
 * @str: pointer to string to print in reverse
 * Return: void
 */

void puts_half(char *str)
{
	int len, i = 0;

	len = strlen(str);
	i = len / 2;
	while (i < len)
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
