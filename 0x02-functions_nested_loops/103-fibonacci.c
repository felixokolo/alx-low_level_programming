#include <stdio.h>
#include "main.h"

long int fibonacci(void);

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%ld\n", fibonacci());
	return (0);
}

/**
 * fibonacci - Generates n numbers of fibonacci numbers
 * Return: sum of even fibonacci numbers
 */

long int fibonacci(void)
{
	long int prev = 1, pres = 2, tmp, sum = 2;

	while (pres <= 4000000)
	{
		tmp = prev + pres;
		prev = pres;
		pres = tmp;
		if (pres % 2 == 0)
		sum += pres;
	}
	return (sum);
}
