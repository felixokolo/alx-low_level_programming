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
	int n, m, pos = 0, p = 0;
	char *s = "cifs", c;
	va_list ap;

	void (*funcs[])(va_list *) = {print_char, print_int, print_float, print_str};

	va_start(ap, format);
	n = 0;

	while (*(format + n) != '\0')
	{
		m = 0;
		pos = -1;
		c = *(format + n);
		while (*(s + m) != '\0')
		{
			if (c == *(s + m))
			{
				pos = m;
				break;
			}

			m++;
		}


		if (pos >= 0)
		{
			if (p > 0)
			printf(", ");

			funcs[pos](&ap);
			p = 1;
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
 * print_str - prints character
 * @ap: character to be printed
 * Return: void
 */

void print_str(va_list *ap)
{
	char *s;

	s = va_arg(*ap, char *);

	if (s != NULL)
	printf("%s", s);
	else
	printf("(nil)");
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
