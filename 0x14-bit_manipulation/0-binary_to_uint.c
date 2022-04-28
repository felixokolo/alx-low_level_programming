#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b:a pointer to a string of 0 & 1 chars
 * Return: converted number or
 * if b is NULL or contains chars not 0 or 1 - 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 0;
	int n = 0, c;

	if (b == NULL)
		return (0);
	c = check_bin(b);
	if (c == -1)
		return (0);
	while (*(b + n) != '\0')
	{
		tmp = tmp << 1;
		tmp += *(b + n) == '0' ? 0 : 1;
		n++;
	}
	return (tmp);
}


/**
 * check_bin - checks if a string is a binary string
 * @s: string to be checked
 * Return: 1 if binary -1 if not
 */
 
int check_bin(const char *s)
{
	int n = 0;
	while (*(s + n) != '\0')
	{
		if(*(s + n) == '0' || *(s + n) == '1')
			n++;
		else
			return (-1);
	}
	return (1);
}