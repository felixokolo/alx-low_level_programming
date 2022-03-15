#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints alphabets in lowercase
 * 
 * Return: Always 0 (Success)
 */

int print_alphabet()
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	return (0);
}
