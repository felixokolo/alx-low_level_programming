#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: Array to search
 * @size: size of array
 * @value: value to search
 * Return: returns position index or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int c = 0, len = 0, target = 0, ret = 0;

	if (array == NULL)
	return (-1);
	len = size;
	printf("Searching in array: ");
	for (c = 0; c < len - 1; c++)
	{
		printf("%d, ", array[c]);
	}
	printf("%d\n", array[c]);
	if (size == 1)
	if (value == array[0])
	return (0);
	if (size > 1)
	{
		target = (len - 1) / 2;
		if (value > array[target])
		{
			ret = binary_search(array + target + 1, len - (target + 1), value);
			if (ret >= 0)
			ret = ret + target + 1;
		}
		else if (value < array[target])
		ret = binary_search(array, target, value);
		else
		return (target);
		return (ret);
	}

	return (-1);
}
