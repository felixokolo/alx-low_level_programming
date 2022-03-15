#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table -Prints the times table from 0
 * Return: void
 */

void times_table(void)
{
	int m1, m2;

	for (m1 = 0; m1 < 10; m1++)
	{
		for (m2 = 0; m2 < 10; m2++)
		{
			_printnum(m1 * m2);
			if (m2 < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (m1 * (m2 + 1) < 9)
				_putchar(' ');
			}
			else
			_putchar('\n');
		}
	}
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
