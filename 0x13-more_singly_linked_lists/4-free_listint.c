#include "lists.h"
/**
 * free_listint- free's a list
 * @head: pointer to list to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (tmp == NULL)
	return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
