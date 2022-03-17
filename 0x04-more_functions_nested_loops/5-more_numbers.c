#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints 0 - 14 10 times
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar(10);
	}
}
