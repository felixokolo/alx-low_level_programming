#include "main.h"
/**
 * flip_bits - returns the number of bits needed
 * to be flipped in n to get m
 * @n: the original number
 * @m: the number n would flip into
 * Return: the number of bits that would need to be flipped for n to became m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp2 = 1;
	unsigned int i = 0;

	while (n != m)
	{
		if ((tmp2 & n) != (tmp2 & m))
		{
			n = n | tmp2;
			m = m | tmp2;
			i ++;
		}
		tmp2 = tmp2 << 1;
	}
	return (i);
}
