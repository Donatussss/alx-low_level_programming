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
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 * if NULL is passed, treat it as an empty string
 * Return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int str_len1, str_len2 = 0;
	void *temp;
	char *new_str;

	if (s1 != NULL)
	{
		str_len1 = _strlen(s1);
	}

	if (s2 != NULL)
	{
		str_len2 = _strlen(s2);
	}

	temp = malloc(sizeof(char) * (str_len1 + str_len2 + 1));

	if (temp == NULL)
	{
		return (NULL);
	}

	new_str = (char *)temp;

	while (i < str_len1)
	{
		*(new_str + i) = *(s1 + i);
		i++;
	}

	while (j < str_len2)
	{
		*(new_str + i) = *(s2 + j);
		i++;
		j++;
	}

	*(new_str + i) = '\0';

	return (new_str);
}
