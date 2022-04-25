#include <stdio.h>
#include "lists.h"
/**
 * print_listint- a function that list all elemnts of list_t
 * @h: listint_t list to be printed
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
