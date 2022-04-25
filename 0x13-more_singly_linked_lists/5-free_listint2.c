#include "lists.h"
/**
 * free_listint2- free's a lisr and sets the head to NULL
 * @head: pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (tmp == NULL)
	return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
