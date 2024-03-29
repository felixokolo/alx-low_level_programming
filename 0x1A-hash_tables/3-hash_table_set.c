#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Hash table
 * @key: Key to add
 * @value: Value of key
 * Return: 1 success or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
	return (0);

	idx = key_index((unsigned char *) key, ht->size);
	new = hash_table_search(ht, key, idx);
	if (new == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
		return (0);
		new->next = NULL;
		new->key = malloc(sizeof(char) * strlen(key) + 1);
		strcpy(new->key, key);
		new->value = malloc(strlen(value) + 1);
		strcpy(new->value, value);
		if (ht->array[idx] == NULL)
		ht->array[idx] = new;
		else
		{
			new->next = ht->array[idx];
			ht->array[idx] = new;
		}
	}
	else
	{
		new->value = realloc(new->value, sizeof(char) * strlen(value) + 1);
		/*new->value = malloc(sizeof(char) * strlen(value) + 1);*/
		if (new->value == NULL)
		return (0);
		strcpy(new->value, value);
	}

	return (1);
}


/**
 * hash_table_search - function that search an element to the hash table
 * @ht: Hash table
 * @key: Key to add
 * @idx: Index of key
 * Return: Pointer to node success or NULL otherwise
 */

hash_node_t *hash_table_search(hash_table_t *ht,
		const char *key, unsigned long int idx)
{
	hash_node_t *tmp;

	if (ht->array[idx] == NULL)
		return (NULL);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (NULL);
}