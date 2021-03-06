#include "lists.h"
/**
 * sum_listint- calculates the sum of of all the data.
 * @head: pointer to the listint_t list
 * Return: the sum of the data of 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
