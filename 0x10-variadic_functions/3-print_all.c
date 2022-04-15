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
	unsigned int n, len, pos;
	char *s = "cifs", *sp = "cdfs";
	va_list ap;
	void (*funcs[])(va_list *);

	va_start(ap, format);
	len = strlen(format);
	funcs = {print_char, print_int, print_float, print_str};
	n = 0;

	while (*(format + n) != '\0')
	{
		pos = check_format(*(format + n), s);
		if (pos >= 0)
		{
			funcs[pos](&ap);
		}
		n++;
	}
			



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

/**
 * print_int - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_int(va_list *ap)
{
	printf("%d ", va_arg(*ap, int);
}
/**
 * print_str - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_str(va_list *ap)
{
	printf("%s ", va_arg(*ap, char *);
}
/**
 * print_float - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_float(va_list *ap)
{
	printf("%f ", va_arg(*ap, float);
}
