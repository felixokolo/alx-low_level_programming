#include "lists.h"
/**
 * reverse_listint- reverses the list.
 * @head: pointer to list
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t next_l, prev;

	if (*head == NULL)
	return (NULL);
	prev = NULL;
	next_l = (*head)->next;
	while (next_l->next != NULL)
	{
		(*head)->next = prev;
		prev = *head;
		*head = next_l;
		next_l = next_l->next;
	}
	return (*head);
}
