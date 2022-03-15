#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Tests if character is lowercase
 * @c: Character to be tested
 * Return: 1 (Is lower)
 * 0 (Is not lower)
 */

int _islower(int c)
{
	int r;

	r = (islower(c) > 0) ? 1:0;
	return (r);
}
