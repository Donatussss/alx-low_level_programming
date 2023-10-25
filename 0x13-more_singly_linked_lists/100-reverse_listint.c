#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a
 * listint_t linked list
 * @head: pointer to start of linked list
 * Return: a pointer to the first node of the reversed list
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	while (*head != NULL)
	{
		temp1 = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = temp1;
	}

	*head = temp2;
	return (*head);
}
