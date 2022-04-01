#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Tests if character is a digit
 * @c: Character to be tested
 * Return: 1 (Is upper)
 * 0 (Is not upper)
 */

int _isdigit(int c)
{
	int r;

	r = (isdigit(c) > 0) ? 1 : 0;
	return (r);
}
