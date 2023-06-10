#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * 
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int id = 0;
	hash_node_t *nod, *nxt;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (id < ht->size)
	{
		nod = (ht->array)[id];
		while (nod)
		{
			nxt = nod->next;
			if (nod->key)
				free(nod->key);
			if (nod->value)
				free(nod->value);
			nod->key = NULL;
			nod->value = NULL;
			free(nod);
			nod = next;
		}
		id++;
	}
	free(ht->array);
	free(ht);
}
