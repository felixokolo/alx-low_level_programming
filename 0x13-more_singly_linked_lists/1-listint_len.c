#include "lists.h"

/**
 * listint_len- counts the number of nodes
 * @h:ptr list containing nodes
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
