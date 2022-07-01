#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c;
	hash_node_t *tmp, *pres;

	for (c = 0; c < ht->size; c++)
	{
		pres = ht->array[c];
		while (pres)
		{
			tmp = pres->next;
			free(pres->key);
			free(pres->value);
			free(pres);
			pres = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
