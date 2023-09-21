#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @s1: pointer to string
 * Return: pointer to string
 */

char *string_toupper(char *s1)
{
	int i = 0;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) >= 97 && *(s1 + i) <= 122)
		{
			*(s1 + i)  = *(s1 + i) - 32;
		}

		i++;
	}

	return (s1);
}
