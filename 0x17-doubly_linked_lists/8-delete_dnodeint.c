#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - a function that deletes the
 * node at index index of a dlistint_t linked list
 * @head: address of head of dlistint_t list
 * @index: index of node to remove
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev_p, *next_p;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->prev == NULL)
		{
			*head = current->next;
			if (current->next != NULL)
				(current->next)->prev = NULL;
			free(current);
			return (1);
		}
		else if (current->prev != NULL)
			prev_p = current->prev;
		if (current->next == NULL)
		{
			prev_p->next = NULL;
			free(current);
			return (1);
		}
		else if (current->next != NULL)
			next_p = current->next;
		prev_p->next = next_p;
		next_p->prev = prev_p;
		free(current);
		return (1);
	}
	return (delete_dnodeint_at_index(&((*head)->next), --index));
}
