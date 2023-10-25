#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list
 * @head: head of linked list
 * @index: index of where to delete node
 * Return: 1 if it succeeded, -1 if it failed
 * index starts at 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_copy = *head, *temp;
	int idx_copy = index;

	while (head_copy != NULL && idx_copy > 1)
	{
		head_copy = head_copy->next;
		idx_copy--;
	}

	if (head_copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(head_copy);
	}
	else
	{
		temp = (head_copy->next)->next;
		free(head_copy->next);
		head_copy->next = temp;
	}

	return (1);
}
