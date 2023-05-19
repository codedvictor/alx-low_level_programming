#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * dlistint_len - Show the number of elements of a list
  * @h: A linked list
  *
  * Return: The number of elements of a list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
