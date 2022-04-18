#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	len = strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
