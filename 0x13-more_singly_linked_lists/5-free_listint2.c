#include "lists.h"
/**
 * free_listint2- free's a lisr and sets the head to NULL
 * @head: pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	if ((head) == NULL)
	return;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp2 = (tmp)->next;
		free(tmp);
		tmp = NULL;
		tmp = tmp2;
	}
	tmp = NULL;
	*head = NULL;
}
