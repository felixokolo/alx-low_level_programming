#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints its parameter
 * @separator: first arg
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == n - 1)
		continue;
		if (separator != NULL)
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
