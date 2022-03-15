#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 * @c: Number to start count
 * Return: void
 */
void print_to_98(int c)
{
	while (c != 98)
	{
		_putchar('0' + c);
		_putchar(',');
		_putchar(' ');
		c += abs(98 - c) / (98 - c);
	}
	_putchar('0' + c);
	_putchar('\n');
}
