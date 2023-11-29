#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to head of linked list
 * Return: the number of nodes in the list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t s = 0;
	listint_t *temp = head;
	while (temp != NULL)
	{
		printf("%d", head->n);
		temp = head->next;
		s++;
	}
}


