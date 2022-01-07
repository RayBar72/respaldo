#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @h: p-t-p to the list
 * @n: value of new node
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		new->prev = NULL;
		new->next = NULL;
		return (*head = new);
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	return (new);
}
