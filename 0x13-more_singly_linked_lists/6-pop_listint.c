#include "lists.h"
/**
 * pop_listint- removes top element in
 * a list
 * @head: pointer to list
 * Return: data of removed node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	return (0);
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
