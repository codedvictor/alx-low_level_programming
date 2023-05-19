#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @n: number to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
