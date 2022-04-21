#include "lists.h"

/**
 * list_len -  function that adds
 * a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list 
 * Return: pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	char *s;

	s = strdup(str);
	tmp = (list_t *)malloc(sizeof(list_t));
	tmp->len = _strlen(s);
	tmp->str = s;
	tmp->next = *head;
	*head = tmp;

	return (tmp);


}

/**
 * _strlen - Returns the length of a string s
 * @s: pointer to string to find length
 * Return: length of string
 */

unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
