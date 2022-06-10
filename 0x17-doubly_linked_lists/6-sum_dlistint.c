#include "lists.h"
/**
 *sum_dlistint- function that returns the sum
 *of all data in a list.
 *@head: pointer to first element in list
 *Return: the sum of the data in the given list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
