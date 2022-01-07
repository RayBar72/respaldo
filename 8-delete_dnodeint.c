#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements
 * @h: pointer to the list
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

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
 * delete_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to the list
 * @index: number of node starting at 0
 * Return: node and NULL if it does not exist
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *recorre = *head;
	unsigned int largo = dlistint_len(recorre);

	if (!head || !*head || index >= largo)
		return (-1);
	while (index--)
	{
		recorre = recorre->next;
	}
	if (recorre->prev)
		recorre->prev->next = recorre->next;
	if (recorre->next)
		recorre->next->prev = recorre->prev;
	if (recorre == *head)
		*head = recorre->next;
	free(recorre);
	return (1);
}
