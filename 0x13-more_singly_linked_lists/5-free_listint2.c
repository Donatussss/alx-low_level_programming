#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a list_t list
 * @head: a pointer to head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_next = *head, *temp_current = *head;

	while (temp_next != NULL)
	{
		temp_next = temp_current->next;
		free(temp_current);
		temp_current = temp_next;
	}

	*head = NULL;
}

