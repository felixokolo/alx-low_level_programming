#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - Tests if character is uppercase
 * @c: Character to be tested
 * Return: 1 (Is upper)
 * 0 (Is not upper)
 */

int _isupper(int c)
{
	int r;

	r = (isupper(c) > 0) ? 1 : 0;
	return (r);
}
