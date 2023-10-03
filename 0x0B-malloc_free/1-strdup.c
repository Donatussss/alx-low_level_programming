#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: pointer to first char in string
 * Return: int length of string
 */

int _strlen(char *s)
{
	int str_len = 0;
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

char *_strdup(char *str)
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
