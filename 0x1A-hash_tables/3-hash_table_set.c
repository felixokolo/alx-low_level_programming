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

	idx = key_index((unsigned char *) key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	return (0);
	new->next = NULL;
	new->key = malloc(sizeof(char) * strlen(key) + 1);
	strcpy(new->key, key);
	new->value = malloc(strlen(value) + 2);
	strcpy(new->value, value);
	if (ht->array[idx] == NULL)
	ht->array[idx] = new;
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	return (1);
}
