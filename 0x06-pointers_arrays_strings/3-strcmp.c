#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal
 * >0 if the first non-matching character in str1 is greater (in ASCII) than that of str2
 * <0 if the first non-matching character in str1 is lower (in ASCII) than that of str2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int return_value = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i) || *(s1 + i) < *(s2 + i))
		{
			return_value = *(s1 + i) - *(s2 + i);
			break;
		}

		i++;

	}

	return (return_value);
}
