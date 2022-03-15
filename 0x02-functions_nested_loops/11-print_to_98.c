#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 * @c: Number to start count
 * Return: void
 */
void print_to_98(int c)
{
	int e = c;

	while (e != 98)
	{
		_putchar('0' + e);
		_putchar(',');
		_putchar(' ');
		c += abs(98 - e) / (98 - e);
	}
	_putchar('0' + e);
	_putchar('\n');
}
