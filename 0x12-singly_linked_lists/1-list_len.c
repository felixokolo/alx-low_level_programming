#include "lists.h"

/**
 * print_list -  function that prints
 * all the elements of a list_t
 * @h: pointer to list to print
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *tmp;

	n = 0;
	tmp = h;

	while (tmp != NULL)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		n++;
	}

	return (n);


}
