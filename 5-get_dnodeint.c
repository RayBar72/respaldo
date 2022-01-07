#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements
 * @h: pointer to the list
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);

}

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to the list
 * @index: number of node starting at 0
 * Return: node and NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *recorre = NULL;
	unsigned int largo = dlistint_len(head), l = 0;

	if (!head || index >= largo)
		return (NULL);
	recorre = head;
	while (l < index)
	{
		recorre->prev = recorre;
		recorre = recorre->next;
		l++;
	}
/*	recorre = recorre->prev;*/
	return (recorre);
}
