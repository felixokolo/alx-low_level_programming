#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: Hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c;
	int check;
	hash_node_t *tmp;

	printf("{");
	check = 0;
	for (c = 0; c < ht->size; c++)
	{
		tmp = ht->array[c];
		if (tmp == NULL)
		continue;
		if (check > 0)
		printf(", ");
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			check++;
			if (tmp->next != NULL)
			printf(", ");
			tmp = tmp->next;
		}

	}
	printf("}\n");
}
