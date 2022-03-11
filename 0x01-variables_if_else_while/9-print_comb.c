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

	for (c1 = 0; c1 < 10; c++)
	{
		for (c2 = 0; c2 < 10; c++)
		{
			if (c1 > 0)
			putchar(48 + c1);
			putchar(48 + c2);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
