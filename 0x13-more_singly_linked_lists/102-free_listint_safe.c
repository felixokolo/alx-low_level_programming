#include "lists.h"
/**
 * free_listint_safe- free's a lisr and sets the head to NULL
 * @head: pointer to list to be freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *tmp, *tmp2;
	int n = 0;

	if ((head) == NULL)
	return (0);

	tmp = *head;
	while (tmp != NULL)
	{
		tmp2 = (tmp)->next;
		free(tmp);
		tmp = NULL;
		tmp = tmp2;
		n++;
	}
	tmp = NULL;
	*head = NULL;
	return (n);
}
