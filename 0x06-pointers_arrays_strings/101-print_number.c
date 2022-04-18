#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	int tmp = abs(n), i = 0;

	if (n == 0)
	_putchar('0');
	else
	while (tmp >= 10)
	{
		tmp /= 10;
		i++;
	}
	if (n < 0)
	_putchar('-');
	tmp = abs(n);
	while (i > 0)
	{
		_putchar('0' + tmp / (10 * i));
		i--;
	}
	_putchar('0' + tmp % 10);
}
