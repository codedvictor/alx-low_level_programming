#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- node of all data structure
 * @head: pointer to pointer in node
 * Return: add new nodes to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
