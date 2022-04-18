#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints a square of # of a specified size c
 * @c: Required size
 * Return: void
 */

void print_diagonal(int c)
{
	int i, j;

	for (j = 0; j < c; j++)
	{
		for (i = 0; i < j; i++)
		_putchar(' ');
		_putchar('\\');
		_putchar(10);
	}
	_putchar(10);
}
