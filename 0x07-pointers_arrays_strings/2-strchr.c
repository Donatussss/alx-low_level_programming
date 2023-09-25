#include "main.h"
#include <stdio.h>

/**
 * _strchr -  a function that locates a character
 * in a string
 * @s: pointer to start of string
 * @c: character to locate
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL if the
 * character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *location = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			location = s + i;
			break;
		}

		i++;
	}

	if (*(s + i) == c)
	{
		location = s + i;
	}

	return (location);
}
