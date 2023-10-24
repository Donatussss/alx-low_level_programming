#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: head of a linked list
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}

	else
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
}
