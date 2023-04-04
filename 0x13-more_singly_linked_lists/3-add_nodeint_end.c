#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end- node of all data structure
 * @head: pointer to pointer in node
 * @n: number of element
 *
 * Return: add new nodes to the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode, *tmp;

	if (head)
	{
		endNode = malloc(sizeof(listint_t));
		if (endNode == NULL)
			return (NULL);

		endNode->n = n;
		endNode->next = NULL;

		if (*head == NULL)
		{
			*head = endNode;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = endNode;
			return (tmp);
		}
	}

	return (NULL);
}
