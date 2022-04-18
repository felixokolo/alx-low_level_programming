#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printc("_putchar");
	return (0);
}

/**
 * printc - Prints a given string str
 * @str: String to be printed
 * Return: Always 0 (Success)
 */

int printc(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
