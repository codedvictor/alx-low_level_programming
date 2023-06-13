#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order 
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int id = 0;
	hash_node_t *nod;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (id < ht->size)
	{
		nod = ((ht->array)[id]);
		while (nod)
		{
			printf("%s'%s': '%s'", comma, nod->key, nod->value);
			comma = ", ";
			nod = nod->next;
		}
		id++;
	}
	puts("}");
}
