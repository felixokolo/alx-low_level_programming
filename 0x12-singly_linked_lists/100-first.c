#include "lists.h"

void _start_fun(void) __attribute__ ((constructor));

/**
 * _start_fun -  function that runs before main
 * Return: void
 */

void _start_fun(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");

}
