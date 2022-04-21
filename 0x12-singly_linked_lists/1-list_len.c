#include "lists.h"

/**
 * list_len -  function that returns
 * the lenght of a linked list
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
		tmp = tmp->next;
		n++;
	}

	return (n);


}
