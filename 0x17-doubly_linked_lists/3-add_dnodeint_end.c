#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * createnode - a function that creates a new
 * dlistint_t node
 * @n: value of node
 * Return: pointer to node
 * NULL if it failed
 */

dlistint_t *createnode(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	return (new);
}


/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list
 * @head: head of dlistint_t list
 * @n: value of new node
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	if (*head == NULL)
	{
		*head = createnode(n);
		if (*head == NULL)
			return (NULL);

		(*head)->next = NULL;
		return (*head);
	}
	else if ((*head)->next == NULL)
	{
		new = createnode(n);
		if (new == NULL)
			return (NULL);
		new->prev = *head;
		new->next = NULL;
		(*head)->next = new;
		return (new);
	}
	else
		return (add_dnodeint_end(&((*head)->next), n));
}
