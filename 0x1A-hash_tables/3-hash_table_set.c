#include "hash_tables.h"

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */

int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *nod = NULL;
	char *x;
	char *y;

	nod = malloc(sizeof(hash_node_t));
	if (!nod)
		return (0);

	x = strdup(key);
	if (!x)
	{
		free(nod);
		return (0);
	}

	y = strdup(value);
	if (!y)
	{
		free(x);
		free(nod);
		return (0);
	}

	nod->key = x;
	nod->value = y;

	if ((ht->array)[idx] == NULL)
		nod->next = NULL;
	else
		nod->next = (ht->array)[idx];
	(ht->array)[idx] = nod;

	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int id;
	hash_node_t *nod = NULL;
	char *y;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);

	nod = (ht->array)[id];
	while (nod && (strcmp(key, nod->key) != 0))
		nod = nod->next;
	if (nod != NULL)
	{
		y = strdup(value);
		if (!y)
			return (0);
		if (nod->value)
			free(nod->value);
		nod->value = y;
		return (1);
	}

	return (create_and_add_node(ht, key, value, id));
}
