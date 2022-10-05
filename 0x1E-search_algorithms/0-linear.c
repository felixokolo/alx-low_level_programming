#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: Array to search
 * @size: size of array
 * @value: value to search
 * Return: returns position index or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int c = 0, len = 0;

	if (array == NULL)
	return (-1);
	len = size;
	while (c < len)
	{
		printf("Value checked array[%d] = [%d]\n", c, array[c]);
		if (array[c] == value)
		return (c);
		c++;
	}
	return (-1);
}
