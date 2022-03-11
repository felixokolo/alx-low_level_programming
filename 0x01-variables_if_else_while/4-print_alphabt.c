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
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c == 113 || c == 101)
		continue;
		putchar(c);
	}
	putchar(10);
	return (0);
}
