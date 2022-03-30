#include <string.h>
#include "main.h"

/**
 * _puts_recursion - copies memory area
 * @s: pointer to memory to set
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
