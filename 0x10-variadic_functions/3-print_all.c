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
	int n, m, p = 0;
	char *s = "cifs";
	va_list ap;

	void (*funcs[])(va_list *) = {print_char, print_int, print_float, print_str};

	va_start(ap, format);
	n = 0;

	while (*(format + n) != '\0')
	{
		m = 0;
		while (*(s + m) != '\0')
		{
			if (*(format + n) == *(s + m))
			{
				if (p > 0)
				printf(", ");

				funcs[m](&ap);
				p = 1;
				break;
			}

			m++;
		}

		n++;
	}

	va_end(ap);
	printf("\n");

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
 * print_float - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
 * print_str - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_str(va_list *ap)
{
	char *cs =  va_arg(*ap, char *);

	printf("%s", cs);
}
