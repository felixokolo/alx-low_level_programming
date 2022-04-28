#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 * @n:number
 * @index: the number of times to be shifted
 * Return: nth bit - bitstatus
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	while (n > 0)
	{
		if (i == index)
			return (n & 1);
		i++;
		n = n >> 1;
	}
	return (-1);
}
