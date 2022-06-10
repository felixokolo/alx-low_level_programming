#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint-prints a doubly linked list
 *@h: pointer to first element in list
 *Return: number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt;
	dlistint_t *tmp = h;

	for (cnt = 0; tmp != NULL; cnt++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (cnt);
}
