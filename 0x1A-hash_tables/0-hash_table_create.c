#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of hash table to create
 * Return: Pointer to created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int c;
	hash_table_t *ht;
	hash_node_t **arr;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	return (NULL);
	ht->size = size;
	arr = malloc(sizeof(arr) * size);
	if (arr == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (c = 0; c < size; c++)
	arr[c] = NULL;
	ht->array = arr;

	return (ht);
}
