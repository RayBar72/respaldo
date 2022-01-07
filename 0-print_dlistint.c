#include "lists.h"

/**
 * print_dlistint -prints all the elements of a dlist
 * @h: pointer to the beggining of the list
 * Return: numeber of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
