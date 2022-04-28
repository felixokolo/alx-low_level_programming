#include "main.h"

/**
 * set_bit - function that sets the value
 * of a bit at a given index
 * @n:number
 * @index: the number of times to be shifted
 * Return: nth bit - bitstatus
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int tmp = *n, t = 1;

	while (tmp > 0 || t > 0)
	{
		if (i == index)
		{
			*n = *n | t;
			return (1);
		}
		i++;
		tmp = tmp >> 1;
		t = t << 1;
	}
	return (-1);
}
