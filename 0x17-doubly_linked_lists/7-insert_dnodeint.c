#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * createnode7 - a function that creates a new
 * dlistint_t node
 * @n: value of node
 * Return: pointer to node
 * NULL if it failed
 */

dlistint_t *createnode7(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	return (new);
}

/**
 * insert_dnodeint_at_index - a function that inserts a
 * new node at a given position
 * @h: address of head of dlistint_t list
 * @idx: the index of the list where the new node
 * @n: value of new node
 * should be added. Index starts at 0
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = createnode7(n);
		if (new == NULL)
			return (NULL);
		if (current->prev == NULL)
		{
			new->prev = NULL;
			new->next = current;
			current->prev = new;
			*h = new;
			return (new);
		}
		else if (current->next == NULL)
		{
			new->prev = current;
			current->next = new;
			return (new);
		}
		else
		{
			new->prev = current->prev;
			new->next = current;
			(new->prev)->next = new;
			(new->next)->prev = new;
		}
	}
	if (idx == 1 && (*h)->next == NULL)
		return (add_dnodeint_end(h, n));
	return (insert_dnodeint_at_index(&((*h)->next), --idx, n));
}
