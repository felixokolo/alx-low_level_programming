#include "lists.h"
/**
 * get_nodeint_at_index- gets the node at specified index of a list.
 * @head: pointer to list
 * @index: the of node
 * Return: pointer to the node at specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int n = 0;

	if (tmp == NULL)
	return (tmp);

	while (tmp->next != NULL)
	{
		if (n == index)
		return (tmp);

		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
