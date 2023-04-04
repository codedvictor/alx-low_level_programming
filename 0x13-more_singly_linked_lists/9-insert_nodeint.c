#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index- add new node
 * @head: nodes
 * @idx: new position to change
 * @n: number of elements
 * Return: success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *itr;
	unsigned int i = 1;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		if (idx > 0)
		{
			itr = *head;
			while (itr)
			{
				if (i == idx)
				{
					newNode->next = itr->next;
					itr->next = newNode;
					return (newNode);
				}
				itr = itr->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			newNode->next = *head;
			*head = newNode;
		}
		return (newNode);
	}
	return (NULL);
}
