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
	listint_t *head_copy = *head, *newx;
	int idx_copy = idx;

	while (head_copy != NULL && idx_copy > 0)
	{
		head_copy = head_copy->next;
		idx_copy--;
	}

	if (head_copy == NULL && idx_copy != 0)
		return (NULL);

	newx = malloc(sizeof(listint_t));
	
	if (newx == NULL)
		return (NULL);

	newx->n = n;

	if (idx == 0)
	{
		newx->next = *head;
		*head = newx;
	}
	else
	{
		newx->next = head_copy->next;
		head_copy->next = newx;
	}

	return (newx);
}
