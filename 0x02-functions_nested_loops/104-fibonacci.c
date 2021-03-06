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
	int pol = 0, fol = 0, tol = 0;

	printf("%lu, %lu, ", prev, pres);
	n -= 2;
	while (n >= 1)
	{
		while (pres > 1.1e12)
		{
			fol++;
			pres -= 1e12;
		}
		while (prev > 1e12)
		{
			pol++;
			prev -= 1e12;
		}
		tmp = prev + pres;
		tol = pol + fol;
		while (tmp > 1e12)
		{
			tol++;
			tmp -= 1e12;
		}
		if (tol > 0)
		{
			printf("%d", tol);
			if (tmp < 1e11)
			putchar('0');
		}
		printf("%lu", tmp);
		if (n > 1)
		printf(", ");
		else
		printf("\n");
		prev = pres;
		pol = fol;
		pres = tmp;
		fol = tol;
		n--;
	}
}
