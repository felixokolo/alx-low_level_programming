#include "lists.h"

/**
 *add_dnodeint_end-function that adds a new node at the end of a list
 *@head: pointer to first element in list
 *@n: data
 *Return: new node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *trans;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		trans = *head;
		while (trans->next != NULL)
			trans = trans->next;
		new->next = NULL;
		new->prev = trans;
		trans->next = new;
	}
	return (new);
}
