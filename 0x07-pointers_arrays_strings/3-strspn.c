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


/**
 * _strspn - a function that gets the length
 * of a prefix substring
 * @s: pointer to string to check for accept
 * @accept: pointer to string being checked
 * in s
 * Return:  the number of bytes in the initial
 * segment of s which consist only of bytes from
 * accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(accept + j) != '\0')
	{
		if (_strchr(s, *(accept + j)) != NULL)
		{
			i++;
		}

		j++;
	}

	if (_strchr(s, *(accept + j)) != NULL)
	{
		i++;
	}

	return (i);
}
