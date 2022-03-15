#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - : Character to be tested
 * Return: void
 */

void jack_bauer(void)
{
	int h, m;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10);
			_putchar(h % 10);
			_putchar(':');
			_putchar(m / 10);
			_putchar(m % 10);
			_putchar('\n');
		}
	}

}
