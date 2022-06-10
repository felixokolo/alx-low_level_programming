#include "lists.h"
/**
 *insert_dnodeint_at_index- function that inserts a new
 *node at a given position.
 *@h: pointer to first element in list
 *@idx: index of the new node
 *@n: data of the new node
 *Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new;
	dlistint_t *trans;
	unsigned int pos;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (new->next != NULL)
			new->next->prev = new;
		*h = new;
	}
	else
	{
		trans = *h;
		for (pos = 0; trans != NULL && pos < (idx - 1); pos++)
		trans = trans->next;
		if (trans == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = trans->next;
		new->prev = trans;
		if (trans->next != NULL)
			trans->next->prev = new;
		trans->next = new;
	}
	return (new);

}
