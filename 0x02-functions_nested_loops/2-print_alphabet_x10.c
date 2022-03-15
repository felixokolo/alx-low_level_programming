#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets in lowercase
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
		_putchar(10);
	}
	return (0);
}
