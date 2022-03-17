#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Tests if character is an alphabet
 * @c: Character to be tested
 * Return: 1 (Is alpha)
 * 0 (Is not alpha)
 */

int _isalpha(int c)
{
	int r;

	r = (isupper(c) > 0) ? 1 : 0;
	return (r);
}
