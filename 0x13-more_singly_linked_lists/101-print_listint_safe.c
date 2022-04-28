#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe- a function that list all elemnts of list_t
 * @head: listint_t list to be printed
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	while (head != NULL)
	{
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (n);
}
