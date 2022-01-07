#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *sig;
	while (head)
	{
		sig = head->next;
		free(head);
		head = sig;
	}
}
