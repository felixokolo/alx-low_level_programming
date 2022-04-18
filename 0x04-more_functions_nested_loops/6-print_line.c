#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints a specified length of line
 * @c: Required length
 * Return: void
 */

void print_line(int c)
{
	int i;

	for (i = 0; i < c; i++)
	_putchar('_');
	_putchar(10);
}
