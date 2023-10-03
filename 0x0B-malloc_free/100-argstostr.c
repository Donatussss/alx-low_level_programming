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
 * argstostr - a function that concatenates all the arguments
 * of your program
 * Each argument should be followed by a \n in the new string
 * @ac: argument count
 * @av: pointer to array of 'pointers of argument strings'
 * Return: a pointer to a new string, or NULL if it fails
 * NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = j + _strlen(*(av + i)) + 1;
		i++;
	}

	new_str = malloc(sizeof(char) * (j + 1));
	i = 0;

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	while (i < ac)
	{
		j = 0;

		while (j < _strlen(*(av + i)))
		{
			*(new_str + k) = *(*(av + i) + j);
			j++;
			k++;
		}

		*(new_str + k) = '\n';
		k++;
		i++;
	}

	*(new_str + k) = '\0';

	return (new_str);
}
