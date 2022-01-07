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
 * insert_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to the list
 * @index: number of node starting at 0
 * @n: value of node
 * Return: node and NULL if it does not exist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *recorre = *h;
	unsigned int largo = dlistint_len(recorre);

	if (!h || idx >= largo)
		return (NULL);
	puts("Pase primer atípico");
	if (!*h)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	puts("Pase segundo atípico");
	if (largo == idx - 1)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	puts("Pase nodo al final");
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	recorre = *h;
	new->n = n;
	puts("Pase malloc");
	while (--idx)
	{
		recorre = recorre->next;
	puts("En el loop");
	}
	new->next = recorre->next;
	new->prev = recorre;
	recorre->next->prev = new;
	recorre->next = new;
	puts("Pase segundo asignación");
	return (new);
}
