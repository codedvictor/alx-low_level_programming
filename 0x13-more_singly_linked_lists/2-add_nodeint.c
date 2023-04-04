#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint- node of all data structure
 * @head: pointer to pointer in node
 * @n: number of element
 *
 * Return: add new nodes to the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	return (NULL);
}
