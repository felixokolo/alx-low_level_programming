#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number c
 * @c: Number to extract its last digit
 * Return: Value of last digit of c
 */

int print_last_digit(int c)
{
	int r;

	r = c % 10;
	_putchar('0' + r);
	return (r);
}
