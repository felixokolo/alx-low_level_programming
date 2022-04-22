#include "lists.h"

/**
 * add_node_end -  function that adds
 * a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: element to add
 * Return: pointer to the new head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;

	char *s = NULL;

	if (str != NULL)
	s = strdup(str);
	tmp = (list_t *)malloc(sizeof(list_t));
	if (tmp == NULL || s == NULL)
	return tmp;
	tmp->len = _strlen(s);
	tmp->str = s;
	tmp->next = NULL;
	if (*head == NULL)
	{
		(*head) = tmp;
	}
	else
	(get_last(*head))->next = tmp;

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

	if (s != NULL)
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * get_last - Returns the length of a string s
 * @h: pointer to string to find length
 * Return: pointer to last node
 */

list_t *get_last(list_t *h)
{
	list_t *tmp = h;

	if (tmp == NULL)
	return (tmp);

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
