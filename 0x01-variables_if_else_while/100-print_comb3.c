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

	for (c1 = 0; c1 < 10; c1++)
	{
		for (c2 = c1 + 1; c2 < 9; c2++)
		{
			putchar(48 + c1);
			putchar(48 + c2);
			putchar(44);
			putchar(32);
	
		}
	}
	return (0);
}
