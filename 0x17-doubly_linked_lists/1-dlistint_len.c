#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len-returns the number of elements in a list
 *@h: pointer to first element in list
 *Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt;
	const dlistint_t *tmp = h;

	for (cnt = 0; tmp != NULL; cnt++)
		tmp = tmp->next;

	return (cnt);
}
