#include "main.h"

/**
* wildcmp - a function that compares two strings and returns 1 if the
* strings can be considered identical, otherwise return 0
* @s0: string to compare to
* @s1: string with wild character
* Return: 1 if the strings can be considered identical, otherwise return 0
*/

int wildcmp(char *s0, char *s1)
{
	if (*s0 == '\0' && *s1 == '\0')
	{
		return (1);
	}

	if (*s0 == *s1)
	{
		return (wildcmp(s0 + 1, s1 + 1));
	}

	if (*s1 == '*')
	{
		if (*s1 == '*' && *s0 == '\0' && *(s1 + 1) != '\0')
		{
			return (0);
		}

		if (wildcmp(s0, s1 + 1) || wildcmp(s0 + 1, s1))
		{
			return (1);
		}
	}
	return (0);
}
