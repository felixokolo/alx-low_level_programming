#include "lists.h"

/**
 * free_list -  function that frees
 * a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp = head;
	if (tmp == NULL)
	return;
	
	while (head != NULL)
	{
		tmp = head->next;
		free_list_t(head);
		head = tmp->next;
	}
}


/**
 * free_list_t - Frees a list_t node
 * @head: pointer to string to free
 * Return: void
 */

void free_list_t(list_t *head)
{
	free(head->str);
	free(head);
}
