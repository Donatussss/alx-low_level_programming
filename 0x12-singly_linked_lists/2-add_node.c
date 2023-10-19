#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: pointer to first char in string
 * Return: int length of string
 */

int _strlen(const char *s)
{
	unsigned int str_len = 0;
	char comp = *s;

	while (comp != '\0')
	{
		str_len++;
		comp = *(s + str_len);
	}

	return (str_len);
}

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: string provided
 * Return: a pointer to a new string which is a duplicate of
 * the string str
 * NULL if str = NULL
 * NULL if insufficient memory was available
 */

char *_strdup(const char *str)
{
	int strlen;
	int i = 0;
	char *new_str;
	void *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	strlen = _strlen(str);
	temp = malloc(sizeof(char) * strlen + 1);

	if (temp == NULL)
	{
		return (NULL);
	}

	new_str = (char *)temp;

	while (i < strlen)
	{
		*(new_str + i) = *(str + i);
		i++;
	}

	*(new_str + i) = '\0';

	return (new_str);
}


/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to head of linked list
 * @str: str data of node to be added
 * Return: pointer to newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodeptr = malloc(sizeof(list_t));

	if (new_nodeptr == NULL)
		return (NULL);

	if (head == NULL && str == NULL)
		return (NULL);
	else if (head == NULL && str != NULL)
	{
		new_nodeptr->str = _strdup(str);
		new_nodeptr->len = _strlen(str);
		new_nodeptr->next = NULL;
		*head = new_nodeptr;
		return (new_nodeptr);
	}
	else if (head != NULL && str == NULL)
	{
		new_nodeptr->str = NULL;
		new_nodeptr->len = 0;
		new_nodeptr->next = *head;
		*head = new_nodeptr;
		return (new_nodeptr);
	}
	else
	{
		/* head != NULL && str != NULL */
		new_nodeptr->str = _strdup(str);
		new_nodeptr->len = _strlen(str);
		new_nodeptr->next = *head;
		*head = new_nodeptr;
		return (new_nodeptr);
	}
}
