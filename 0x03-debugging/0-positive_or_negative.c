#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n < 0)
	printf("%d is negative\n", n);
	if (n == 0)
	printf("%d is zero\n", n);
	if (n > 0)
	printf("%d is positive\n", n);
}
