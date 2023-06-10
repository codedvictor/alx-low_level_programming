#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hth;
	hash_node_t **nod;
	unsigned long int x = 0;

	if (size == 0)
		return (NULL);

	hth = malloc(sizeof(hash_table_t));
	if (!hth)
		return (NULL);
	nod = malloc(sizeof(*nod) * size);
	if (!nod)
	{
		free(hth);
		return (NULL);
	}
	while (x < size)
	{
		nod[x] = NULL;
		x++;
	}

	hth->size = size;
	hth->array = nod;

	return (hth);
}
