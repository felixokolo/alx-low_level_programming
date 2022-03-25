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
