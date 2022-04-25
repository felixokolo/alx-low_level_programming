#include "lists.h"

/**
 * add_nodeint - adds a node at the begining
 * of a list
 * @head: pointer to begining of list
 * @n: number of nodes to be added
 * Return: pointer to new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
