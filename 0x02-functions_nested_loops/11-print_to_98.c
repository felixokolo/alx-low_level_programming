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
		_printnum(e);
		_putchar(',');
		_putchar(' ');
		if (e > 98)
		e--;
		else
		e++;
	}
	_printnum(e);
	_putchar('\n');
}

/**
 * _printnum - prints an integer number
 * @n: number to print
 * Return: void
 */
void _printnum(int n)
{
	int tmp = abs(n), arr[10], i = 0;

	if (n == 0)
	_putchar('0');
	else
	while (tmp != 0)
	{
		arr[i] = tmp % 10;
		tmp /= 10;
		i++;
	}
	if (n < 0)
	_putchar('-');
	while (i > 0)
	{
		_putchar('0' + arr[i - 1]);
		i--;
	}
}
