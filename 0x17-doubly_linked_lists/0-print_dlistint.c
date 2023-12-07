#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list
 * @h: head of dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}

