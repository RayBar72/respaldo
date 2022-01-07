#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @h: p-t-p to the list
 * @n: value of new node
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *previus = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = *head;
	new->n = n;
	if (!*head)
	{
		return (*head = new);
	}
	previus = *head;
	while (previus->next)
		previus = previus->next;
	previus->next = new;
	new->prev = previus;
	return (new);
}
