#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a square of # of a specified size c
 * @c: Required size
 * Return: void
 */

void print_triangle(int c)
{
	int i, j;

	for (j = 1; j <= c; j++)
	{
		for (i = c - j; i > 0; i--)
		_putchar(' ');
		for (i = 0; i < j; i++)
		_putchar('#');
		_putchar(10);
	}
	_putchar(10);
}
