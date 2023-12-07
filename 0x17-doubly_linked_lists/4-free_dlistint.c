#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: head of the dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;

	next = head->next;
	free(head);
	free_dlistint(next);
}
