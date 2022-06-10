#include "lists.h"
/**
 *delete_dnodeint_at_index- function that deletes the node at index.
 *@head: pointer to first element in list
 *@index:the node that should be deleted. Index starts at 0
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	dlistint_t *tmp;
	unsigned int pos;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	cur = *head;
	pos = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		*head->prev = NULL;
	}
	else
	{
		while (pos < (index - 1))
		{
			if (cur == NULL)
				return (-1);
			cur = cur->next;
			pos++;
		}
		tmp = cur;
		cur = cur->next;
		tmp->next = cur == NULL ? NULL : cur->next;
		cur->next->prev = tmp;
	}
	free(cur);
		return (1);
}
