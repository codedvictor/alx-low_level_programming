#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index- node of all data structure
 * @head: pointer to pointer in node
 * @index: location to get
 * Return: add new nodes to the head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
