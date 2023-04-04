#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len- number of elements
 * @h: element to print
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
