#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints its parameter
 * @separator: first arg
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);
		if (i == n - 1)
		continue;
		if (separator != NULL)
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}