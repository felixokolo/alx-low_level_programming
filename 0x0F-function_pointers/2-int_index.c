#include <stdlib.h>

/**
 * int_index - Function that executes a function given
 * as a parameter on each element of an array
 * @array: Array that holds elements to execute given fuction
 * @size: size of given array
 * @cmp: pointer to the function to execute
 * Return: index of element
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
