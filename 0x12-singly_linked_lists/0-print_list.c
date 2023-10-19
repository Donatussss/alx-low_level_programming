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

size_t print_list(const list_t *h)
{
	if (h->next == NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);

		return (1);
	}

	else
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);

		return (1 + print_list(h->next));
	}
}
