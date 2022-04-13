#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - returns the sum of a and b.
 *@a: a
 *@b: b
 *Return - sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - returns the difference of a and b.
 *@a: a
 *@b: b
 *Return - difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 *op_mul - returns the multiple of a and b.
 *@a: a
 *@b: b
 *Return - multiple of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
 *op_div - returns the division of a and b.
 *@a: a
 *@b: b
 *Return - division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}



/**
 *op_mod - returns the modulus of a and b.
 *@a: a
 *@b: b
 *Return - division of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
