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
	int ol = 0;

	printf("%lu, %lu, ", prev, pres);
	n -= 2;
	while (n > 1)
	{
		while (pres > 1e15)
		{
			ol++;
			pres -= 1e15;
		}
		while (prev > 1e15)
		{
			ol++;
			prev -= 1e15;
		}
		tmp = prev + pres;
		while (tmp > 1e15)
		{
			ol++;
			tmp -= 1e15;
		}
		if (ol > 0)
		printf("%d", ol);
		printf("%lu, ", tmp);
		prev = pres;
		pres = tmp;
		n--;
	}
	printf("%d%lu\n", ol, pres + prev);
}
