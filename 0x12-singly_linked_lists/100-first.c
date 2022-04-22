#inclide <stdio.h>
#include "lists.h"

void _start(void) __attribute__ ((constructor));

/**
 * _start -  function that runs before main
 * Return: void
 */

void _start(void)
{
	printf("You're beat! and yet, you must allow,\
	I bore my house upon my back!\n");

}
