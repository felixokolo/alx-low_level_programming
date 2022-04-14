#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints its parameter
 * @format: first arg
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, n;
	char *s;
	va_list ap;

	va_start(ap, format);
	n = strlen(format);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);
		if (i == n - 1)
		continue;
	}
	va_end(ap);
	printf("\n");
}
