#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * sum_dlistint - a function that returns the
 * sum of all the data (n) of a dlistint_t linked list
 * @head: head of dlistint_t list
 * Return: sum of all the data (n) of a dlistint_t list
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
