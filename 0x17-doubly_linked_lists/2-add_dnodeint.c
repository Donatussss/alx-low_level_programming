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
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: address of head of dlistint_t list
 * @n: number of new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head == NULL)
	{
		*head = createnode(n);
		if (*head == NULL)
			return (NULL);
		return (*head);
	}

	new = createnode(n);
	if (new == NULL)
		return (NULL);
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
