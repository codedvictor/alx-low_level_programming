#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- node of all data structure
 * @head: pointer to pointer in node
 * Return: add new nodes to the head
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

	free(head);
}
