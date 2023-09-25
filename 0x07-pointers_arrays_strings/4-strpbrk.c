#include "main.h"
#include <stdio.h>
#include <limits.h>

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

	return (location);
}

/**
 * _strn - a function that locates a character
 * in a string
 * @s: pointer to start of string
 * @c: character to locate
 * Return: a number of  the first occurrence of
 * the character c in the string s
 */

int _strn(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			break;
		}

		i++;
	}

	return (i);
}

/**
 * _strpbrk - a function that searches a string for
 * any of a set of bytes.
 * @s: string to be checked
 * @accept: string with bytes to be located in s
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int min = INT_MAX;
	int i = 0;
	char *c = NULL;
	char *f = NULL;
	int temp = 0;

	while (*(accept + i) != '\0')
	{
		c = _strchr(s, *(accept + i));

		if (c != NULL)
		{
			temp = _strn(s, *c);

			if (temp < min)
			{
				min = temp;
				f = c;
			}
		}

		i++;
	}

	return (f);
}
