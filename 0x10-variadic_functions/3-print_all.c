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
	unsigned int n;
	va_list ap;

	va_start(ap, format);
	n = strlen(format);
	n++;

	va_end(ap);
	printf("\n");
}
