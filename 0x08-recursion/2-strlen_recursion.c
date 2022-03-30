#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - copies memory area
 * @s: pointer to memory to set
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (1);
	}
}
