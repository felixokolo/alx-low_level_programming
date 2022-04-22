#include "lists.h"

/**
 * print_list -  function that prints
 * all the elements of a list_t
 * @h: pointer to list to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);


}

