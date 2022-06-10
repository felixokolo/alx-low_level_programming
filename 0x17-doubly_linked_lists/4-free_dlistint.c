#include "lists.h"
/**
 *free_dlistint- frees a list
 *@head: pointer to first element in list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	head = NULL;

}
