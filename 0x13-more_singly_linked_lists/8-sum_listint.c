#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - summation
  * @head: node of each data
  *
  * Return: Success
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		while (head)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
