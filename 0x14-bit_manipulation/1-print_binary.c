#include "main.h"
/**
 * print_binary - function that prints the binary
 * representation of a decimal number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0x80000000, tmp = 0;
	int c = 0;

	tmp += n;
	if (tmp == 0)
		_putchar('0');
	while (n > 0 || tmp > 0)
	{
		if (c == 0 && (i & tmp) > 0)
			c = 1;
		if (c)
		{
			if ((i & tmp) == i)
				_putchar('1');
			else
				_putchar('0');
			n = n >> 1;
		}
		tmp = tmp << 1;
	}
}
