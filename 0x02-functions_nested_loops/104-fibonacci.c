#include <stdio.h>
#include "main.h"

void fibonacci(int);

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	fibonacci(98);
	return (0);
}

/**
 * fibonacci - Generates n numbers of fibonacci numbers
 * @n: number of fibonacci numbers to generate
 * Return: void
 */

void fibonacci(int n)
{
	unsigned long int prev = 1, pres = 2, tmp;

	printf("%lu, %lu, ", prev, pres);
	n -= 2;
	while (n > 1)
	{
		tmp = prev + pres;
		printf("%lu, ", tmp);
		prev = pres;
		pres = tmp;
		n--;
	}
	printf("%lu\n", pres + prev);
}
