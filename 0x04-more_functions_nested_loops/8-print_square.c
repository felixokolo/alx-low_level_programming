#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square of # of a specified size c
 * @c: Required size
 * Return: void
 */

void print_square(int c)
{
	int i, j;

	for (j = 0; j < c; j++)
	{
		for (i = 0; i < c; i++)
		_putchar('#');
		_putchar(10);
	}
	_putchar(10);
}
