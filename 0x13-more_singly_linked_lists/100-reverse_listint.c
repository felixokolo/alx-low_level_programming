#include "lists.h"
/**
 * reverse_listint- reverses the list.
 * @head: pointer to list
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	int i = 0;
	listint_t tmp = (*head)->next;

	(*head)->next = NULL;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp->next;
		tmp->next = *head;
		tmp = tmp2;
		
	}
}
