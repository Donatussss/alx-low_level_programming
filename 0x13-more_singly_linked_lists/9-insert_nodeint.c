#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 * @head: head of linked list
 * @idx: index of where to insert node
 * @n: data of node to insert
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *temp_next, **carry, *newx;

	if (*head == NULL)
		return (NULL);

	else if (idx == 0 && *head != NULL)
	{
		newx = malloc(sizeof(listint_t));

		if (newx == NULL)
			return (NULL);

		newx->n = n;
		temp_next = (*head)->next;
		(*head)->next = newx;
		newx->next = temp_next;

		return (newx);
	}

	carry = &((*head)->next);
	return (insert_nodeint_at_index(carry, idx - 1, n));
}
