#include "lists.h"
/**
 *insert_nodeint_at_index- inserts node at a specified index.
 *@head: pointer to list
 *@idx: index to add the new node
 *@n: data of new node
 *Return: pointer to the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;

	if (*head == NULL)
	return (NULL);
	tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	if (idx > 0)
	{
		tmp = get_node(*head, idx - 1);
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	
		new->n = n;
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->n = n;
		new->next = tmp;
		*head = new;
	}
	return (new);
}

/**
 * get_node- gets the node at specified index of a list.
 * @head: pointer to list
 * @index: the of node
 * Return: pointer to the node at specified index
 */
listint_t *get_node(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int n = 0;

	if (tmp == NULL)
	return (tmp);

	while (tmp != NULL)
	{
		if (n == index)
		return (tmp);

		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
