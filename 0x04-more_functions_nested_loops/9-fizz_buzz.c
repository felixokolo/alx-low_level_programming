#include <stdio.h>
#include "main.h"

void fizz_buzz(int);

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	fizz_buzz(100);
	return (0);
}

/**
 * fizz_buzz -fizz buzz numbers
 * @n: number of fibonacci numbers to generate
 * Return: void
 */

void fizz_buzz(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			printf("FizzBuzz");
			else
			printf("Fizz");
		}
		else if (i % 5 == 0)
		printf("Buzz");
		else
		printf("%d", i);
		if (i != n)
		printf(" ");
		i++;
	}
	printf("\n");
}
