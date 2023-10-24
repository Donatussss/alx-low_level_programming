#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: pointer to head of linked list
 * @index: index of node to be returned
 * Return: listint_t node
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index == 0 && head == NULL)
		return (NULL);
	else if (index == 0 && head != NULL)
		return (head);


	return (get_nodeint_at_index(head->next, index - 1));
}
