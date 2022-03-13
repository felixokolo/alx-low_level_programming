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
	int c1, c2, c3, c4;
	
	for (c1 = 0; c1 < 10; c1++)
	{
		for (c2 = 0; c2 < 10; c2++)
		{
			for (c3 = 0; c3 < 10; c3++)
			{
				for (c4 = 0; c4 < 10; c4++)
				{
					if (c1 == c3 && c2 == c4)
					continue;
					putchar(48 + c1);
					putchar(48 + c2);
					putchar(32);
					putchar(48 + c3);
					putchar(48 + c4);
					if (c1 == 9 && c2 == 9 && c3 == 9 && c4 == 9)
					continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
