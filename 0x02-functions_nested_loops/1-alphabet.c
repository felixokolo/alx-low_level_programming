#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 * 
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar(10);
	return (0);
}
