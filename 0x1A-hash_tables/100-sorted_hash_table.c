#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hth;
	shash_node_t **nod;
	unsigned long int x = 0;

	if (size == 0)
		return (NULL);

	hth = malloc(sizeof(shash_table_t));
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
	hth->shead = NULL;
	hth->stail = NULL;

	return (hth);
}

/**
 * insert_to_sorted_list - compare abcs and insert node into list (for printing)
 * @ht: sorted hash table
 * @node: node to insert
 * Return: 1 if success, 0 if fail
 */
int insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (!(ht->shead))
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	if (strcmp(node->key, (ht->shead)->key) <= 0)
	{
		node->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, (ht->stail)->key) > 0)
	{
		node->sprev = ht->stail;
		(ht->stail)->snext = node;
		ht->stail = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(node->key, (temp->snext)->key) > 0)
			temp = temp->snext;
		node->snext = temp->snext;
		node->sprev = temp;
		(temp->snext)->sprev = node;
		temp->snext = node;
	}
	return (1);
}

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: sorted hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(shash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	shash_node_t *nod = NULL;
	char *x;
	char *y;
	(void) idx;
	nod = malloc(sizeof(shash_node_t));
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
	nod->next = NULL;
	nod->sprev = NULL;
	nod->snext = NULL;

	if ((ht->array)[idx] == NULL)
		nod->next = NULL;
	else
		nod->next = (ht->array)[idx];
	(ht->array)[idx] = nod;

	return (insert_to_sorted_list(ht, nod));
}

/**
 * shash_table_set - add element to sorted hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int id;
	shash_node_t *nod = NULL;
	char *x;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);

	nod = (ht->array)[id];
	while (nod && (strcmp(key, nod->key) != 0))
		nod = nod->next;
	if (nod != NULL)
	{
		x = strdup(value);
		if (!x)
			return (0);
		if (nod->value)
			free(nod->value);
		nod->value = x;
		return (1);
	}

	return (create_and_add_node(ht, key, value, id));
}

/**
 * shash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int id;
	shash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	id = key_index((const unsigned char *)key, ht->size);

	temp = (ht->array)[id];
	while (temp != NULL && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (!temp)
		return (NULL);
	else
		return (temp->value);
}

/**
 * shash_table_print - print key/values of hash table in ascending order
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nod;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	nod = ht->shead;
	while (nod)
	{
		printf("%s'%s': '%s'", comma, nod->key, nod->value);
		comma = ", ";
		nod = nod->snext;
	}
	puts("}");
}

/**
 * shash_table_print_rev - print key/values of sorted hashtable in reverse order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nod;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	nod = ht->stail;
	while (nod)
	{
		printf("%s'%s': '%s'", comma, nod->key, nod->value);
		comma = ", ";
		nod = nod->sprev;
	}
	puts("}");
}

/**
 * shash_table_delete - free and delete sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int id = 0;
	shash_node_t *nod, *next;

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
			next = nod->next;
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
