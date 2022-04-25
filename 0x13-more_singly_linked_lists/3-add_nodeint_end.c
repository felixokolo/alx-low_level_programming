#include "lists.h"

/**
 * add_nodeint_end - adds nodes at the end of a list
 * @head: pointer to begining of list
 * @n: number of nodes to be added
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		(*head) = tmp;
	}
	else
	(get_last(*head))->next = tmp;

	return (tmp);

}

/**
 * get_last - Returns the length of a string s
 * @h: pointer to string to find length
 * Return: pointer to last node
 */
listint_t *get_last(listint_t *h)
{
	listint_t *tmp = h;

	if (tmp == NULL)
	return (tmp);

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
