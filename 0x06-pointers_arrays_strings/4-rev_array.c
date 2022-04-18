#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse elements in an array
 * @a: pointer to array to reverse
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int len, tmp, i = 0;

	len = n - 1;
	while ((len - i) > (len / 2))
	{
		tmp = *(a + i);
		*(a + i) = *(a + len - i);
		*(a + len - i) = tmp;
		i++;
	}
}
