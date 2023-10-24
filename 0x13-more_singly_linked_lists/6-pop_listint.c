#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that frees a list_t list
 * @head: a pointer to head of list
 * Return: deleted node's n data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_next, *temp_current;
	int n;

	if (head != NULL)
	{
		temp_next = *head;
		temp_current = temp_next;
		n = temp_current -> n;
		temp_next = temp_current->next;
		free(temp_current);
		*head = temp_next;
	}

	return (n);
}

