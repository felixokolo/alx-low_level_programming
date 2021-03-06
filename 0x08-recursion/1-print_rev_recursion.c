#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - copies memory area
 * @s: pointer to memory to set
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}
	_putchar(*s);
}
