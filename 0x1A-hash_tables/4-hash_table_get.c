#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key to find
 * Return: Pointer to element success or NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
	return (NULL);
	idx = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
