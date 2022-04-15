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
	unsigned int n, len;
	char *s = "cifs", *sp = "cdfs";
	va_list ap;
	void (*funcs[])(void *c

	va_start(ap, format);
	len = strlen(format);
	n = 0;

	while (*(format + n) != '\0')
	{
		if (check_format(*(format + n), s) >= 0)
		{
			



	va_end(ap);
	printf("\n");
}

/**
 * check_format - checks if character is a valid specifier
 * @c: character to check
 * Return: 1 or 0
 */

int check_format(char c, char *s)
{
	int n, len;

	len = strlen(s);
	n = 0;

	while (*(s + n) != '\0')
	{
		if (c == *(s + n))
		return (n);

		n++;
	}
	return (-1);
}

/**
 * print_char - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_char(va_list *ap)
{
	printf("%c ", va_arg(*ap, char);
}
