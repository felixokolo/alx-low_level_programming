#include <ctype.h>
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
			_putchar(',');
			else
			_putchar('\n');
		}
	}
}
