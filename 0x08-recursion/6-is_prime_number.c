#include <string.h>
#include "main.h"

/**
 * is_prime_number - copies memory area
 * @n: pointer to memory to set
 * Return: factorial of n
 */

int is_prime_number(int n)
{
	if (n == 0)
	return (0);
	if (n < 0)
	return (0);
	if (n == 1)
	return (0);
	else
	return (check_prime(n, 2));
}

/**
 * check_prime - checks for root
 * @n: number to check root
 * @d: divisor
 * Return: 1 if d is square root of n
 * 0 if d is not square root of n
 */

int check_prime(int n, int d)
{
	if (d != n)
	{
		if (n % d == 0)
		{
			return (0);
		}
		else
		return (check_prime(n, d + 1));
	}
	else
	return (1);
	return (0);
}
