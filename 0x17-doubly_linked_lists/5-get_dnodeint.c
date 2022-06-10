#include "lists.h"
/**
 *get_dnodeint_at_index- function that returns the nth node of a list.
 *@head: pointer to first element in list
 *@index: position of node to be returned
 *Return: pointer of the node at the nth position.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;


	while (cnt < index)
	{
		if (head == NULL)
			return (NULL);
		cnt++;
		head  = head->next;
	}
	return (head);
}
