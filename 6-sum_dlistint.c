#include "lists.h"

/**
 * sum_dlistint - sums all data in a list
 * @head: pointer to the list
 * Return: suma, else 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *recorre = NULL;
	unsigned int sum = 0;

	if (!head)
		return (0);
	recorre = head;
	while (recorre)
	{
		sum += recorre->n;
		recorre = recorre->next;
	}
	return (sum);
}
