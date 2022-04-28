#include "main.h"
/**
 * clear_bit- sets the value of a bit at a given index to 0.
 * @n: A ptr to a bit
 * @index: the index to set the value
 * Return: if an error occure -1 otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int tmp = *n, t = 0xFFFFFFFE;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (tmp > 0 || t < 0xFFFFFFFF)
	{
		if (i == index)
		{
			*n = *n & t;
			return (1);
		}
		i++;
		tmp = tmp >> 1;
		t = (t << 1) + 1;
	}
	return (-1);
}
