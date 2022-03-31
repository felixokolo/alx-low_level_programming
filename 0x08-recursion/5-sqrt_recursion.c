#include <string.h>
#include "main.h"

/**
 * _sqrt_recursion - copies memory area
 * @n: pointer to memory to set
 * Return: factorial of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	if (n < 0)
	return (-1);
	else
	return (check_root(n, 1));
}

/**
 * check_root - checks for root
 * @n: number to check root
 * @d: divisor
 * Return: 1 if d is square root of n
 * 0 if d is not square root of n
 */

int check_root(int n, int d)
{
	if (d * d <= n)
	{
		if (n % d == 0 && (n / d) == d)
		{
			return (d);
		}
		else
		return (check_root(n, d + 1));
	}
	else
	return (-1);
	return (-1);
}
