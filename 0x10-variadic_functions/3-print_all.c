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
	int len;

	len = strlen(format);
	len++;
}

/**
 * print_char - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_int - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}
/**
 * print_str - prints character
 * @ap: character to be printed
 * Return: void
 */

