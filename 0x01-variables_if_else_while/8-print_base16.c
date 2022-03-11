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

	for (c = 48; c < 58; c++)
	putchar(c);
	for (c = 65; c < 72; c++)
	putchar(c);
	putchar(10);
	return (0);
}
