#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: head of a linked list
 * Return: the number of nodes
 * You are allowed to use printf
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (1);
	else
		return (1 + list_len(h->next));
}
