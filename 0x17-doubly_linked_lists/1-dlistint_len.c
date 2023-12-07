#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list
 * @h: head of dlistint_t list
 * Return: number of elements in a linked dlistint_t
 * list
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}
