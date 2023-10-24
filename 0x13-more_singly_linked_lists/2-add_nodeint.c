#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to head of linked list
 * @n: int data of node to be added
 * Return: pointer to newly created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeptr = malloc(sizeof(listint_t));

	if (new_nodeptr == NULL)
		return (NULL);

	if (head == NULL)
	{
		new_nodeptr->n = n;
		new_nodeptr->next = NULL;
		*head = new_nodeptr;
		return (new_nodeptr);
	}
	else
	{
		new_nodeptr->n = n;
		new_nodeptr->next = *head;
		*head = new_nodeptr;
		return (new_nodeptr);
	}
}
