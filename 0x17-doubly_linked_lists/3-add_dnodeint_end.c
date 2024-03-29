#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nhead, *lnode;

	nhead = malloc(sizeof(dlistint_t));
	if (nhead == NULL)
		return (NULL);

	nhead->n = n;
	nhead->next = NULL;

	if (*head == NULL)
	{
		nhead->prev = NULL;
		*head = nhead;
		return (nhead);
	}

	lnode = *head;
	while (lnode->next != NULL)
		lnode = lnode->next;
	lnode->next = nhead;
	nhead->prev = lnode;

	return (nhead);
}
