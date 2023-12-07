#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list
 * @head: head of dlistint_t list
 * @index: index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_dnodeint_at_index(head->next, --index));
}
