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
	int c1;

	for (c1 = 0; c1 < 10; c1++)
	{
		putchar(48 + c1);
		if (c1 == 9)
		break;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
