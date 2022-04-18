#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number n
 * @c: Number to be tested
 * Return: 1 (Is positive)
 * 0 (Is zero)
 * -1 (is negative)
 */

int print_sign(int c)
{
	int r;

	if (c > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (c == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
