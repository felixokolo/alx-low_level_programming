#include "lists.h"
/**
 * delete_nodeint_at_index- function that deletes a node at index.
 * @head: pointer to list
 * @index: node index to be deleted
 * Return: 1 if success, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	int ret = -1;

	if (*head == NULL)
	return (ret);
	tmp = *head;

	if (index > 0)
	{
		tmp = get_node(*head, index - 1);
		if (tmp == NULL)
		{
			return (ret);
		}

		tmp2 = tmp->next;
		tmp->next = tmp2->next;
		free(tmp2);
	}
	else
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	ret = 0;
	return (ret);
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
