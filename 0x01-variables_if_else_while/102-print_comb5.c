#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int c1, c2;
	
	for (c1 = 0; c1 < 100; c1++)
	{
		for (c2 = c1 + 1; c2 < 100; c2++)
		{
			putchar(48 + (c1 / 10));
			putchar(48 + (c1 % 10));
			putchar(32);
			putchar(48 + (C2 / 10));
			putchar(48 + (C2 % 10));
			if (c1 == 99 && c2 == 98)
			continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
